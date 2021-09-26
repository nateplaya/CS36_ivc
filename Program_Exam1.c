#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char stckname[10];
	float shares;
	float buyprice;
	float crrntprice;
	char stcktype[10];

	printf("What is the stock's name? ");
	gets(stckname);

	printf("\n\nHow many shares of %s are you keeping track of? " ,stckname);
	scanf("%f", &shares);

	printf("\n\nWhat is the buy price of %s? ", stckname);
	scanf("%f", &buyprice);

	printf("\n\nWhat is the current price of %s? ", stckname);
	scanf("%f", &crrntprice);

	printf("\n\nWhat type of stock is %s? ", stckname);
	getchar();
	gets(stcktype);

	system("PAUSE");
}