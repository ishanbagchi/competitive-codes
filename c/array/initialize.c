#include <stdio.h>

int main() {
	// int arr1[5]; // declare array size

	int arr2[] = { 10, 20, 30, 40, 50 };
	// int arr3[6] = { 10, 20, 30, 40 }; // stores: 10, 20, 30, 40, 0, 0	

	printf("Size of this compiler is %lu\n");

	for(int i = 0; i < 5; i++) {
		printf("The address of arr2[%d] is %p\n", i, &arr2[i]);
	}
}

