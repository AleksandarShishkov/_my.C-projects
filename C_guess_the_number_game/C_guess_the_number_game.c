


		/*
		 A C program that prompts the 
		 user to guess an integer in the range
		 of 1 - 100.
 
		 The program also keeps running total
		 for the number of guesses and discplays it
		 once the number is guessed
		*/






#include <stdio.h>
#include <stdbool.h>



bool guess_num(int, int);													// a function`s prototipe


int main()
{

	bool guess = false;													// a boolean as loops statement


	srand(time(NULL));													// setting the seed
	int num = rand() % 100 + 1;												// an integer to hold randomize
																// value from 1 to 100

	int  num_guess = 0;													// an integer to hold the
																// running total for the number
																// of guesses
		
	int user;														// an integer to hold the users
																// choice
	
		do
	{


		puts("\nEnter number (1 - 100)> ");										// prompting the user to enter
		scanf_s("%d", &user);												// the value

		
		if (!guess_num(num, user))											// validating the functions
		{														// returned value
			

			if (user > num)												// validating whther the
			{													// inputted number is larger
				printf("\n'%d' is not the number. Try lower", user);
				guess = false;											// setting guess to false

			}
			else													// validating whether the
			{													// inputted number is smaller
				printf("\n'%d' is not the number. Try higher", user);		
				guess = false;											// setting guess to false					

			}

			num_guess++;												// adding 1 to num_guess
			
		}
		else																
		{	
			printf("\nCorrect! The number is '%d'.\n", num);							// a message to indicate
																// that the number`s been
																// guessed
			guess = true;												// setting guess to true
		}


	} while (!guess);

	

	printf("\nYou`ve guessed the number in '%d' attempts!\n\n", num_guess);	// outputting the number of
																// attempts

	puts("\nThe program has ended!\n");											// a message indicating
																// the program has ended

	return 0;
}



bool guess_num(int num, int user)												// a function`s definition
{
	if (num == user)													// validating the input
		return true;
	else
		return false;
}


