#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Please provide two numbers. \n\n");
	
	int num1, num2, sum, product, difference, quotient;

	printf("First number: ");
	scanf("%d", &num1);
	printf("Second number: ");
	scanf("%d", &num2);

	sum = num1 + num2;
	product = num1 * num2;
	difference = abs(num1-num2);
	quotient = num1 / num2;

	printf("\nSum: %d", sum);
	printf("\nProduct: %d", product);
	printf("\nDifference: %d", difference);
	printf("\nQuetent: %d", quotient);
	printf("\n");

	return 0;
}

