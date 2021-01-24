




/*
 A C program that simulates
 a game of craps. Initially the user has
 amount of $10000 and is asked to place a bet
 or to quit the game. Once the bet is placed,
 the program simulates rolling of 2 dice. If the sum
 is 7 or 11 on the first throw the user wins and the
 bet is added to the current ballance.

 If the sum is 2, 3 or 12 at the first throw the user
 looses and the bet is substracted from the
 current ballance.

 If the sum is not 2, 3, 7, 11 or 12 on the first throw, the
 user is promped to throw again in order to make the same score
 as the one from the first throw.

 The user can place bets until the ballance is $0.0.
 */





#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


enum Status { CONTINUE, WON, LOST };												// enumerator for CONTINUE, WON and LOST
enum Status game_status;													// assigning the statuses to game_status




int rollDice();															// a function protorype for rolling the dice
double bet(double);														// a function prototype for the bet

int main()
{

	int sum;														// an integer to hold the sum of the dice
	int myPoints;														// an integer to hold the current point
	bool new_game = true;													// a boolean flag for the game-loop
	char buffer;														// a char to clear the buffer memory

	char nGame;														// a char to hold the new game choice
	int wins = 0;														// an integer to hold running total for the winned games
	int looses = 0;														// an integer to hold running total for the lost games


	double ballance = 10000;												// a double to hold the starting ballance
	double myBet;														// a double to hold the user`s bet




	srand(time(NULL));													// randomizing the integers for the dice

	while (new_game)
	{

		myBet = bet(ballance);												// calling bet() function, assigning the value to myBet
		char buffer = getchar();											// clearing the buffer memory

		puts("\nYou need 7 ot 11");
		puts("Press <Enter> to roll the dice . . .");									// promting the user to press <Enter> to roll the dice
		getchar();
		sum = rollDice();												// calling rollDice() function, assigning the value to sum


		switch (sum)													// validating the sum
		{
		case 7:
		case 11:

			game_status = WON;											// setting game_status to WON if win
			break;

		case 2:
		case 3:
		case 12:

			puts("\nCraps!\n");
			game_status = LOST;											// setting game_status to LOST if loose
			break;

		default:

			game_status = CONTINUE;											// setting game_status to CONTINUE if not WON or LOST
			myPoints = sum;												// assigning the valid from the sum to myPoints
			printf("\nCurrent point: '%d'\n", sum);									// printing the current point
			break;

		}


		while (game_status == CONTINUE)
		{
			printf("\nYou need '%d'\n", myPoints);
			puts("Press <Enter> to roll the dice . . .");								// promting the user to press <Enter> to roll the dice
			getchar();
			sum = rollDice();											// calling rollDice() function

			if (sum == myPoints)											// validating the input
				game_status = WON;
			else
			{
				if (sum == 7)
					game_status = LOST;
			}
		}


		if (game_status == WON)
		{
			printf("\nThe player wins!\n");
			wins++;													// adding 1 to wins if WON
			ballance += myBet;											// adding myBet to ballance
		}
		else
		{
			printf("\nThe player looses!\n");
			looses++;												// adding 1 to looses if LOST
			ballance -= myBet;											// substracting myBet from ballance
		}


		puts("\nCurrent score: \n");											// printing the current result
		printf("Wins:   %d\n", wins);
		printf("Looses: %d\n", looses);
		printf("Cash:   $%.2f", ballance);

		puts("\n\nNew game? (y/n)> ");											// promting the user to select new game
		scanf_s("%c", &nGame);
		buffer = getchar();												// clearing the buffer memory

		while (nGame != 'y' && nGame != 'n')
		{
			puts("Try again> ");
			scanf_s("%d", &nGame);
		}

		if (nGame == 'y')												// validating the input
			new_game = true;
		else
		{
			puts("\nThe game has ended!");
			printf("\nYou`re leaving the game with $%.2f.\n", ballance);
			new_game = false;
		}


	}



	return 0;
}



double bet(double ballance)													// a function definition for the bet with a parameter
{																// for the ballance

	double current_bet;													// a double to hold the bet

	printf("\nYou have $%.2f in your pocket. Place your bet ('-1' to quit)> $", ballance);					// promting the user to enter the bet
	scanf_s("%lf", &current_bet);

	while (current_bet > ballance)
	{
		printf("\nCannot bet $%.2f, not enough money. Try again ('-1' to quit)> $", current_bet);
		scanf_s("%lf", &current_bet);
	}

	if (current_bet == -1)													// validating the input
	{
		printf("\nYou`re leaving the game with $%.2f.", ballance);
		puts("\nThe program`s ended!\n");
		exit(0);
	}

	return current_bet;													// returning the bet

}


int rollDice()															// a function definition for rolling the dice
{
	int die1;														// an integer to hold the result for die 1
	int die2;														// an integer to hold the result for die 2
	int sum;														// an integer to hold the sum from die1 + die2

	die1 = rand() % 6 + 1;													// randomizing die1
	die2 = rand() % 6 + 1;													// randomizing die2

	sum = die1 + die2;													// summming the integers

	printf("\nThe player rolled %d + %d = '%d'\n", die1, die2, sum);							// displaying the result

	return sum;														// returning the sum
}



