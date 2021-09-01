#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{

	//employee 1

	char name1[10];
	char department1[10];
	float yincome1;
	float raisep1;

	printf("What is the employee's first name? ");
	scanf("%s", name1);

	printf("What department does the employee work in? ");
	scanf("%s", department1);

	printf("What is the employee's current yearly income? ");
	scanf("%f", &yincome1);

	printf("What is the raise percentage of the employee? ");
	scanf("%f", &raisep1);

	float raiseamount1 = yincome1 * (raisep1 / 100);
	float newpay1 = yincome1 + raiseamount1;

	float totalCincome = yincome1;
	float totalRamount = raiseamount1;
	float totalNewpay = newpay1;

	printf("The employee %s who works in %s has a current yearly income of $%f and a raise percentage of %f percent. Their raise amount is $%f and their new pay amount is $%f.\n\n", name1, department1, yincome1, raisep1, raiseamount1, newpay1);

	//employee 2

	char name2[10];
	char department2[10];
	float yincome2;
	float raisep2;

	printf("What is the employee's first name? ");
	scanf("%s", name2);

	printf("What department does the employee work in? ");
	scanf("%s", department2);

	printf("What is the employee's current yearly income? ");
	scanf("%f", &yincome2);

	printf("What is the raise percentage of the employee? ");
	scanf("%f", &raisep2);

	float raiseamount2 = yincome2 * (raisep2 / 100);
	float newpay2 = yincome2 + raiseamount2;

	totalCincome += yincome2;
	totalRamount += raiseamount2;
	totalNewpay += newpay2;

	printf("The employee %s who works in %s has a current yearly income of $%f and a raise percentage of %f percent. Their raise amount is $%f and their new pay amount is $%f.\n\n", name2, department2, yincome2, raisep2, raiseamount2, newpay2);

	//employee 3

	char name3[10];
	char department3[10];
	float yincome3;
	float raisep3;

	printf("What is the employee's first name? ");
	scanf("%s", name3);

	printf("What department does the employee work in? ");
	scanf("%s", department3);

	printf("What is the employee's current yearly income? ");
	scanf("%f", &yincome3);

	printf("What is the raise percentage of the employee? ");
	scanf("%f", &raisep3);

	float raiseamount3 = yincome3 * (raisep3 / 100);
	float newpay3 = yincome3 + raiseamount3;

	totalCincome += yincome3;
	totalRamount += raiseamount3;
	totalNewpay += newpay3;

	printf("The employee %s who works in %s has a current yearly income of $%f and a raise percentage of %f percent. Their raise amount is $%f and their new pay amount is $%f.\n\n", name3, department3, yincome3, raisep3, raiseamount3, newpay3);

	//employee 4

	char name4[10];
	char department4[10];
	float yincome4;
	float raisep4;

	printf("What is the employee's first name? ");
	scanf("%s", name4);

	printf("What department does the employee work in? ");
	scanf("%s", department4);

	printf("What is the employee's current yearly income? ");
	scanf("%f", &yincome4);

	printf("What is the raise percentage of the employee? ");
	scanf("%f", &raisep4);

	float raiseamount4 = yincome4 * (raisep4 / 100);
	float newpay4 = yincome4 + raiseamount4;

	totalCincome += yincome4;
	totalRamount += raiseamount4;
	totalNewpay += newpay4;

	printf("The employee %s who works in %s has a current yearly income of $%f and a raise percentage of %f percent. Their raise amount is $%f and their new pay amount is $%f.\n\n", name4, department4, yincome4, raisep4, raiseamount4, newpay4);

	//employee 5

	char name5[10];
	char department5[10];
	float yincome5;
	float raisep5;

	printf("What is the employee's first name? ");
	scanf("%s", name5);

	printf("What department does the employee work in? ");
	scanf("%s", department5);

	printf("What is the employee's current yearly income? ");
	scanf("%f", &yincome5);

	printf("What is the raise percentage of the employee? ");
	scanf("%f", &raisep5);

	float raiseamount5 = yincome5 * (raisep5 / 100);
	float newpay5 = yincome5 + raiseamount5;

	totalCincome += yincome5;
	totalRamount += raiseamount5;
	totalNewpay += newpay5;

	printf("The employee %s who works in %s has a current yearly income of $%f and a raise percentage of %f percent. Their raise amount is $%f and their new pay amount is $%f.\n\n", name5, department5, yincome5, raisep5, raiseamount5, newpay5);

	//totals

	printf("The total current yearly income of all employees is $%f. The total raise amount for all employees is $%f. The total new pay for all employees is $%f.", totalCincome, totalRamount, totalNewpay);

	return 0;

}
