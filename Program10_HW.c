#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 5

struct Employee
{

	char name[25];
	char department[20];
	float currentYearlyIncome;
	float raisePercentage;
	float raiseAmount;
	float newPayAmount;

};

void load(struct Employee e[], int n)
{

	for (int i = 0; i < n; i++)
	{

		printf("Please enter the employee's name: ");
		gets_s(e[i].name, 25);

		printf("Please enter the employee's department: ");
		gets_s(e[i].department, 20);

		printf("Please enter the employee's current yearly income: ");
		scanf("%f", &e[i].currentYearlyIncome);
		
		printf("Please enter the employee's raise percentage: ");
		scanf("%f", &e[i].raisePercentage);

		getchar();

		printf("\n\n");

	}

}

void calc(struct Employee e[], int n)
{

	for (int i = 0; i < n; i++)
	{

		e[i].raiseAmount = e[i].currentYearlyIncome * (e[i].raisePercentage / 100);
		e[i].newPayAmount = e[i].currentYearlyIncome + e[i].raiseAmount;

	}

	float TotalCurrentYearlyIncomes = 0;
	float TotalRaiseAmounts = 0;
	float TotalNewYearlyIncomes = 0;

	for (int i = 0; i < n; i++)
	{

		TotalCurrentYearlyIncomes += e[i].currentYearlyIncome;
		TotalRaiseAmounts += e[i].raiseAmount;
		TotalNewYearlyIncomes += e[i].newPayAmount;

	}

	printf("The total of the current yearly incomes is $%0.2f", TotalCurrentYearlyIncomes);
	printf("\n");
	printf("The total of the raise amounts is $%0.2f", TotalRaiseAmounts);
	printf("\n");
	printf("The total of the new pay amounts is $%0.2f", TotalNewYearlyIncomes);
	printf("\n\n");

}

void sort(struct Employee e[], int n)
{

	struct Employee t; //had to add struct to make it not give error

	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - 1; j++)
			if (strcmp(e[j].name, e[j + 1].name) > 0)
			{
				t = e[j];
				e[j] = e[j + 1];
				e[j + 1] = t;
			}

	printf("Names of empoloyees sorted in decending order: \n");
	
	for (int i = 0; i < n; i++)
	{

		printf("%s\n", e[i].name);

	}

	printf("\n\n");

}

void print(struct Employee e[], int n)
{
	
	for (int i = 0; i < n; i++)
	{

		printf("%s\n", e[i].name);
		printf("%s\n", e[i].department);
		printf("%f\n", e[i].currentYearlyIncome);
		printf("%f\n", e[i].raisePercentage);

	}

}

void savetext(struct Employee e[], int n)
{

	FILE* f;
	f = fopen("d:\\employees.txt", "w");

	for (int i = 0; i < n; i++)
	{
		
		fprintf(f, "%s\n", e[i].name);
		fprintf(f, "%s\n", e[i].department);
		fprintf(f, "%f\n", e[i].currentYearlyIncome);
		fprintf(f, "%f\n", e[i].raisePercentage);

	}
	
	fclose(f);

}

void retrievetext(struct Employee e[], int n)
{

	FILE* f;
	int length;

	f = fopen("d:\\employees.txt", "r");

	for (int i = 0; i < n; i++)
	{

		fgets(e[i].name, sizeof(e[i].name), f);
		length = strlen(e[i].name);
		e[i].name[length - 1] = '\0';

		fgets(e[i].department, sizeof(e[i].department), f);
		length = strlen(e[i].department);
		e[i].department[length - 1] = '\0';

		fscanf(f, "%f\n", &e[i].currentYearlyIncome);
		fscanf(f, "%f\n", &e[i].raisePercentage);

	}

	fclose(f);

}

void savebin(struct Employee e[], int n)
{

	FILE* f;

	f = fopen("d:\\employees.bin", "wb");

	fwrite(&e, sizeof(e[0]), n, f);
	fclose(f);

}

void retrievebin(struct Employee e[], int n)
{

	FILE* f;

	f = fopen("d:\\employees.bin", "rb");

	fread(&e, sizeof(e[0]), n, f);
	fclose(f);

}

void main()
{

	struct Employee e[SIZE]; //also had to add struct to remove error
	load(e, SIZE);
	calc(e, SIZE);
	sort(e, SIZE);
	print(e, SIZE);

	savetext(e, SIZE);
	retrievetext(e, SIZE);
	printf("\n\nAfter the text file is retrieved\n\n");
	print(e, SIZE);

	savebin(e, SIZE);
	retrievebin(e, SIZE);
	printf("\n\nAfter the binary file is retrieved\n\n");
	print(e, SIZE);

	return 0;

}
