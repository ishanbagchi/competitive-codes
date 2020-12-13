#include <stdio.h>

int main() {
	int arr[5];

	printf("Enter 5 numbers:\n");

	for(int i = 0; i < 5; i++) {
		printf("Enter %d number: ", i + 1);
		scanf("%d", &arr[i]);
	}

	printf("\nThe array is: \n");

	for(int i = 0; i < 5; i++) {
		printf("'%d' ", arr[i]);
	}

	return 0;
}
