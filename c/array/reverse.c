#include <stdio.h>

void reverseArray(int arr[], int start, int end) {
	int temp;
	while(start < end) {
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start ++;
		end --;
	}
}

void printArray(int arr[], int size) {
	for(int i = 0; i < size; i++) {
		printf("'%d' ", arr[i]);
	}
	printf("\n");
}

int main() {
	int size;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	int arr[size];
	for(int i = 0; i < size; i++) {
		printf("Enter %dth value: ", i);
		scanf("%d", &arr[i]);
	}
	printf("The entered array is:\n");
	printArray(arr, size);
	reverseArray(arr, 0, size - 1);
	printf("The resulting array is:\n");
	printArray(arr, size);
}
