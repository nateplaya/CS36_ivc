#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*

	This program will take input of employee data (name, department, current income, raise percentage) and will calculate raise amounts and new total incomes.

	Written by Naji Arnaout

	09/02/2021

*/

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

/*

What is the employee's first name? Mike
What department does the employee work in? accounting
What is the employee's current yearly income? 66111.54
What is the raise percentage of the employee? 6.6
The employee Mike who works in accounting has a current yearly income of $66111.539062 and a raise percentage of 6.600000 percent. Their raise amount is $4363.361328 and their new pay amount is $70474.898438.

What is the employee's first name? Shohei
What department does the employee work in? marketing
What is the employee's current yearly income? 89224.17
What is the raise percentage of the employee? 4.8
The employee Shohei who works in marketing has a current yearly income of $89224.171875 and a raise percentage of 4.800000 percent. Their raise amount is $4282.760254 and their new pay amount is $93506.929688.

What is the employee's first name? Jared
What department does the employee work in? management
What is the employee's current yearly income? 75123.25
What is the raise percentage of the employee? 7.4
The employee Jared who works in management has a current yearly income of $75123.250000 and a raise percentage of 7.400000 percent. Their raise amount is $5559.120605 and their new pay amount is $80682.367188.

What is the employee's first name? Anthony
What department does the employee work in? sales
What is the employee's current yearly income? 69644.44
What is the raise percentage of the employee? 5.5
The employee Anthony who works in sales has a current yearly income of $69644.437500 and a raise percentage of 5.500000 percent. Their raise amount is $3830.444092 and their new pay amount is $73474.882812.

What is the employee's first name? Justin
What department does the employee work in? management
What is the employee's current yearly income? 96222.77
What is the raise percentage of the employee? 3.9
The employee Justin who works in management has a current yearly income of $96222.773438 and a raise percentage of 3.900000 percent. Their raise amount is $3752.688232 and their new pay amount is $99975.460938.

The total current yearly income of all employees is $396326.187500. The total raise amount for all employees is $21788.373047. The total new pay for all employees is $418114.531250.

*/
