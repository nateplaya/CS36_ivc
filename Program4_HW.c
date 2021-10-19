#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//random number generator

	int randnb1, randnb2, randnb3, randnb4;
	time_t t;
	srand((unsigned)time(&t));
	randnb1 = rand() % 10;
	randnb2 = rand() % 10;
	randnb3 = rand() % 10;
	randnb4 = rand() % 10;

	//printf("%d %d %d %d\n\n", randnb1, randnb2, randnb3, randnb4); (USE THIS TO SEE GENERATED NBS)

	//bet amnount from user

	float betamount;

	printf("Place a bet: $");
	scanf("%f", &betamount);

	//guess number 1

	int guess1;

	printf("\n\n\Guess a number from 0 to 9: ");
	scanf("%i", &guess1);

	//guess number 2

	int guess2;

	printf("\n\n\Guess a number from 0 to 9: ");
	scanf("%i", &guess2);

	//guess number 3

	int guess3;

	printf("\n\n\Guess a number from 0 to 9: ");
	scanf("%i", &guess3);

	//guess number 4

	int guess4;

	printf("\n\n\Guess a number from 0 to 9: ");
	scanf("%i", &guess4);

	//guess comparisons

	int correctguess = 0;

	if (guess1 == randnb1)
	{
		correctguess += 1;
	}
	
	if (guess2 == randnb2)
	{
		correctguess += 1;
	}
	
	if (guess3 == randnb3)
	{
		correctguess += 1;
	}
	
	if (guess4 == randnb4)
	{
		correctguess += 1;
	}

	//loss or reward

	if (correctguess == 4)
	{
		betamount = betamount * 5;
		printf("\n\nCongratulations! You won!!! Your bet has been multiplied by 5 totaling to $%f", betamount);
	}
	else if (correctguess == 3)
	{
		betamount = betamount * 2;
		printf("\n\nCongratulations! You won!!! Your bet has been doubled totaling to $%f", betamount);
	}
	else if (correctguess == 2)
	{
		printf("\n\nYou're lucky! You almost lost your money!!! You'll receive the same amount you bet totaling to $%f", betamount);
	}
	else if (correctguess < 1)
	{
		printf("\n\nTough luck! You lost all your money!!! Better luck next time!");
	}
	else
	{
		printf("\n\nTough luck! You lost all your money!!! Better luck next time!");
	}

	return 0;

}
