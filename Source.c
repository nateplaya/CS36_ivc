#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1;
	int num2;

	printf("Give me a number: ");
	scanf("%i", &num1);
	printf("Thank you!\n\n");

	printf("Give me another number: ");
	scanf("%i", &num2);
	printf("Thanks again!\n\n");

	int sum = num1 + num2;
	int difference = num1 - num2;
	int product = num1 * num2;
	float quotient = (float)num1 / (double)num2;
	int modulus = num1 % num2;
	float avg = (float)sum / 2;

	printf("Number 1 is %i\n", num1);
	printf("Number 2 is %i\n", num2);
	printf("The sum of both numbers is %i\n", sum);
	printf("The difference of both numbers is %i\n", difference);
	printf("The product of both numbers is %i\n", product);
	printf("The quotient of both numbers is %f\n", quotient);
	printf("The modulus of both numbers is %i\n", modulus);
	printf("The average of both numbers is %f\n", avg);

	return 0;
}