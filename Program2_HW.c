#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{

	char name[10];
	char department[10];
	float yincome;
	float raisep;

	//employee 1

	printf("What is the employee's first name? ");
	scanf("%s", name);

	printf("What department does the employee work in? ");
	scanf("%s", department);

	printf("What is the employee's current yearly income? ");
	scanf("%f", &yincome);

	printf("What is the raise percentage of the employee? ");
	scanf("%f", &raisep);

	float raiseamount = yincome * (raisep / 100);
	float newpay = yincome + raiseamount;

	float totalCincome = yincome;
	float totalRamount = raiseamount;
	float totalNewpay = newpay;

	printf("The employee %s who works in %s has a current yearly income of $%f and a raise percentage of %f percent. Their raise amount is $%f and their new pay amount is $%f.\n\n", name, department, yincome, raisep, raiseamount, newpay);

	//employee 2

	printf("What is the employee's first name? ");
	scanf("%s", name);

	printf("What department does the employee work in? ");
	scanf("%s", department);

	printf("What is the employee's current yearly income? ");
	scanf("%f", &yincome);

	printf("What is the raise percentage of the employee? ");
	scanf("%f", &raisep);

	raiseamount = yincome * (raisep / 100);
	newpay = yincome + raiseamount;

	totalCincome += yincome;
	totalRamount += raiseamount;
	totalNewpay += newpay;

	printf("The employee %s who works in %s has a current yearly income of $%f and a raise percentage of %f percent. Their raise amount is $%f and their new pay amount is $%f.\n\n", name, department, yincome, raisep, raiseamount, newpay);
	
	//employee 3

	printf("What is the employee's first name? ");
	scanf("%s", name);

	printf("What department does the employee work in? ");
	scanf("%s", department);

	printf("What is the employee's current yearly income? ");
	scanf("%f", &yincome);

	printf("What is the raise percentage of the employee? ");
	scanf("%f", &raisep);

	raiseamount = yincome * (raisep / 100);
	newpay = yincome + raiseamount;

	totalCincome += yincome;
	totalRamount += raiseamount;
	totalNewpay += newpay;

	printf("The employee %s who works in %s has a current yearly income of $%f and a raise percentage of %f percent. Their raise amount is $%f and their new pay amount is $%f.\n\n", name, department, yincome, raisep, raiseamount, newpay);

	//employee 4

	printf("What is the employee's first name? ");
	scanf("%s", name);

	printf("What department does the employee work in? ");
	scanf("%s", department);

	printf("What is the employee's current yearly income? ");
	scanf("%f", &yincome);

	printf("What is the raise percentage of the employee? ");
	scanf("%f", &raisep);

	raiseamount = yincome * (raisep / 100);
	newpay = yincome + raiseamount;

	totalCincome += yincome;
	totalRamount += raiseamount;
	totalNewpay += newpay;

	printf("The employee %s who works in %s has a current yearly income of $%f and a raise percentage of %f percent. Their raise amount is $%f and their new pay amount is $%f.\n\n", name, department, yincome, raisep, raiseamount, newpay);

	//employee 5

	printf("What is the employee's first name? ");
	scanf("%s", name);

	printf("What department does the employee work in? ");
	scanf("%s", department);

	printf("What is the employee's current yearly income? ");
	scanf("%f", &yincome);

	printf("What is the raise percentage of the employee? ");
	scanf("%f", &raisep);

	raiseamount = yincome * (raisep / 100);
	newpay = yincome + raiseamount;

	totalCincome += yincome;
	totalRamount += raiseamount;
	totalNewpay += newpay;

	printf("The employee %s who works in %s has a current yearly income of $%f and a raise percentage of %f percent. Their raise amount is $%f and their new pay amount is $%f.\n\n", name, department, yincome, raisep, raiseamount, newpay);

	//totals

	printf("The total current yearly income of all employees is $%f. The total raise amount for all employees is $%f. The total new pay for all employees is $%f.", totalCincome, totalRamount, totalNewpay);

	return 0;

}