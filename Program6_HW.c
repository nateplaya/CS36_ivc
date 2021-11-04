#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//user input
void employeeInput(char *name, char *department, float *yincome)
{

	printf("\n\nWhat is the employee's first name? ");
	scanf("%s", name);

	printf("What department does the employee work in? ");
	scanf("%s", department);

	printf("What is the employee's current yearly income? ");
	scanf("%f", *(&yincome));

}

//raise percentage calculation
void perc(float *yincome, float *raisep)
{

	if (*yincome <= 70000)
	{
		*raisep = 8.6;
	}
	else if (70000.01 < *yincome && *yincome <= 80000)
	{
		*raisep = 7.4;
	}
	else if (80000.01 < *yincome && *yincome <= 90000)
	{
		*raisep = 5.8;
	}
	else if (*yincome >= 90000.01)
	{
		*raisep = 4.9;
	}

}

//calculate amounts
void calc(float *raiseamount, float *yincome, float *raisep, float *totalCincome, float *totalRamount, float *totalNewpay, float *newpay)
{

	*raiseamount = *yincome * (*raisep / 100);
	*newpay = *yincome + *raiseamount;

	*totalCincome += *yincome;
	*totalRamount += *raiseamount;
	*totalNewpay += *newpay;

}

//main function
void main()
{

	//declerations
	char name[10];
	char department[10];
	float yincome = 0;
	float raisep = 0;

	float raiseamount = 0;
	float newpay = 0;

	float totalCincome = 0;
	float totalRamount = 0;
	float totalNewpay = 0;

	//amount of employees to be inputed
	int numofemp = 0;

	printf("How many employees do you want to input? ");
	scanf("%i", &numofemp);

	//loop
	for (int i = 1; i <= numofemp; i++)
	{

		employeeInput(name, department, &yincome);
		perc(&yincome, &raisep);
		calc(&raiseamount, &yincome, &raisep, &totalCincome, &totalRamount, &totalNewpay, &newpay);

		printf("The employee %s who works in %s has a current yearly income of $%0.2f and a raise percentage of %0.2f percent. Their raise amount is $%0.2f and their new pay amount is $%0.2f.\n", name, department, yincome, raisep, raiseamount, newpay);

	}

	printf("\n\nThe total current yearly income of all employees is $%0.2f. The total raise amount for all employees is $%0.2f. The total new pay for all employees is $%0.2f.\n\n", totalCincome, totalRamount, totalNewpay);

	return 0;

}
