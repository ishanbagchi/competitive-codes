/*
* Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

*  - Integers in each row are sorted from left to right.
*  - The first integer of each row is greater than the last integer of the previous row.
*/

#include <iostream>
using namespace std;
#define R 3
#define C 4

int searchElement(int a[R][C], int e)
{
    int i = 0, j = C - 1;
    while (i < R && j >= 0)
    {
        if (a[i][j] == e)
        {
            return 1;
        }

        while (a[i][j] < e)
        {
            if (i + 1 < R)
                i++;
            else
                return 0;
        }

        while (a[i][j] > e)
        {
            if (j - 1 >= 0)
                j--;
            else
                return 0;
        }
    }
    return 0;
}

/* Driver Code */
int main()
{
    int arr[R][C] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12}};

    // Function Call
    int isPresent = searchElement(arr, 6);
    cout << "Element Status: ";
    (isPresent == 1) ? cout << "True" : cout << "False";
    return 0;
}