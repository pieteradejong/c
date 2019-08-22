#include <stdio.h>

int main() {
	printf("Summing two numbers.");
	
	int num1, num2, sum;

	printf("Please type first number: \n");
	scanf("%d", &num1);
	printf("Please type first number: \n");
	scanf("%d", &num2);

	sum = num1 + num2;

	printf("\nThe sum of %d and %d is %d\n", num1, num2, sum);

	return 0;
}

