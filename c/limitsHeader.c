#include<stdio.h>
#include<limits.h>

int main() {
    int var1 = INT_MIN;
    int var2 = INT_MAX;

    unsigned int var3 = 0;
    unsigned int var4 = UINT_MAX;

    short int var5 = SHRT_MIN;
    short int var6 = SHRT_MAX;

    unsigned short int var7 = 0;
    unsigned short int var8 = USHRT_MAX;


    printf("Range of signed integer is from: %d to %d", var1, var2);
    printf("\nRange of unsigned integer is from: %u to %u", var3, var4);
    printf("\nRange of short integer is from: %d to %d", var5, var6);
    printf("\nRange of short unsigned integer is from: %u to %u", var7, var8);
    return 0;
}