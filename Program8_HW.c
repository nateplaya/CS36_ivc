#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void intro()
{

	printf("\nWelcome to the guessing game!\n");
	printf("You have to guess a number from 1 to 50. If you don't get it right, I'll give you a hint!\n");
	printf("You have 6 chances, good luck!\n\n");

}

void game()
{

	int randnb;
	time_t t;
	srand((unsigned)time(&t));
	randnb = rand() % 50 + 1;

	int userguess;
	int i = 0;
	for (i = 1; i <= 6; i++)
	{

		printf("Enter a number: ");
		scanf("%i", &userguess);

		if (randnb > userguess)
		{

			printf("\nThe random number is larger than your guess. ");

		}
		else if (randnb < userguess)
		{

			printf("\nThe random number is smaller than your guess. ");

		}
		else
		{

			printf("\nCongradulations! You guessed the number! It took you %i tries!\n\n", i);
			break;

		}

	}

	if (i == 7)
	{

		printf("\n\nYou lost...");
		printf("\nThe correct number is %i.\n\n", randnb);

	}

}

void main()
{

	int input;
	do
	{

		printf("NUMBER GUESSING GAME\n");
		printf("ENTER 1 TO PLAY\n");
		printf("ENTER 0 TO EXIT\n");
		printf("PLEASE CHOOSE: ");
		scanf("%i", &input);

		switch (input)
		{

		case 1:
			intro();
			game();
			break;

		case 0:
			printf("\nEXITTING...");
			break;

		default:
			printf("invalid Input\n");
			break;

		}



	} while (input);
	
	return 0;

}