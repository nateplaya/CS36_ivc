#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//variable declarations
int n1, n2, n3, n4;

//declerations for sort
int i, j, a, n = 4, number[15];

//scan integers
void load()
{
	printf("Enter the first number: ");
	scanf("%i", &n1);

	printf("Enter the second number: ");
	scanf("%i", &n2);

	printf("Enter the third number: ");
	scanf("%i", &n3);

	printf("Enter the fourth number: ");
	scanf("%i", &n4);
}

//print integers
void print()
{

	printf("\n\nThe first number you entered is %i\n", n1);
	printf("The second number you entered is %i\n", n2);
	printf("The third number you entered is %i\n", n3);
	printf("The fourth number you entered is %i\n", n4);

}

//return largest number
void lnumber()
{

	//declare local max
	int max = n1;

	//if largest number
	if (n2 > max)
		max = n2;
	if (n3 > max)
		max = n3;
	if (n4 > max)
		max = n4;

	//print max value
	printf("\n\n%i is the largest number.\n", max);

}

//sort high-low
void sort()
{
	
	//user input to array
	number[0] = n1;
	number[1] = n2;
	number[2] = n3;
	number[3] = n4;

	//sorting
	for (i = 0; i < n; ++i)

	{

		for (j = i + 1; j < n; ++j)

		{

			if (number[i] < number[j])

			{

				a = number[i];

				number[i] = number[j];

				number[j] = a;

			}

		}

	}

}

void main()
{

	load();
	print();
	lnumber();
	sort();

	printf("\n\nDescending order of entered numbers: ");

	for (i = 0; i < n; ++i)

		printf("\n%d", number[i]);

	return 0;

}
