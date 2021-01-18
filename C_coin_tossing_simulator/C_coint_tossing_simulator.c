


		/*
		 A C program that simulates a
		 tossing of a coin within user-defined
		 range of repetitions. 
		*/






#include <stdio.h>




void coin_toss(int);												// a function`s prototype


int main()
{

	int num;														// an integer to hold the
																	// number of the repetitions


	puts("\nHow many times the coin will be tossed?> ");			// prompting the user to enter
	scanf_s("%d", &num);											// the number of the repetitions



	while (num < 1)													// validating the input
	{
		printf("'%d' is not a valid number. Try again> ", num);
		scanf_s("%d", &num);
	}

	coin_toss(num);													// passing the inputted value
																	// as an argument


	puts("\nThe program has ended!\n");								// a message indicating that
																	// the program has ended


	return 0;
}


void coin_toss(int num)												// a function`s definition
{

	srand(time(NULL));												// seeding the random sequence
	
	int coin;														// an integer to hold the
																	// randomized number

	int count_h = 0;												// an integer to hold the current
																	// count for 'Heads'
		
	int count_t = 0;												// an integer to hold the current
																	// count for 'Tails'


	for (int i = 0; i < num; i++)									// a for loop with user-defined
	{																// range of repetitions

		coin = rand() % 2 + 1;										// randomising the number in the
																	// range 1 - 2
	
		if (coin == 1)												// validating the number
		{
			puts("\nHeads");										// printing the output
			count_h++;												// incrementing coun_h
		}
		else
		{
								
			puts("\nTails");										// printing the output
			count_t++;												// incrementing count_t
		}
	}

	printf("\nHeades was tossed '%d' times", count_h);				// printing the ouptut for
																	// 'Heads'

	printf("\nTails was tossed '%d' times\n", count_t);				// printing the output for
																	// 'Tails'

}


