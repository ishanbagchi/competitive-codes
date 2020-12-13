#include <stdio.h>

int main() {
	int number1, number2, result;
	printf("Enter first number: ");
	scanf("%d", &number1);
	printf("Enter second number: ");
	scanf("%d", &number2);
	result = number1 + number2;
	printf("%d + %d = %d", number1, number2, result);
	return(0);
}
