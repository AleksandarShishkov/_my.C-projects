



		/*
		 A C program that prompts an input
		 from the user, validates is and
		 prints the outputted data trough 
		 switch cases 
		 */




#include <stdio.h>											// including the stdio header


int main()
{

	int num;											// an integer to hold the inputed
													// value

	int try_again = 1;										// an integer to hold 1 or -1

	while (try_again == 1)										// entering the while loop
	{

		printf("\nEnter an integer between 1 trough 30: ");					// prompting the user to enter
		scanf_s("%d", &num);									// an integer 1-30

		while (num < 1 || num>30)								// validating the input
		{
			printf("\nInvalid input. Try again> ");
			scanf_s("%d", &num);

		}
		
		switch (num)										// switching the input
		{
		case 1:

			puts("\n\tI");
			break;

		case 2:

			puts("\n\tII");
			break;

		case 3:

			puts("\n\tIII");
			break;

		case 4:

			puts("\n\tIV");
			break;

		case 5:

			puts("\n\tV");
			break;

		case 6:
			
			puts("\n\tVI");
			break;

		case 7:

			puts("\n\tVII");
			break;

		case 8:

			puts("\n\tVIII");
			break;

		case 9:

			puts("\n\tIX");
			break;

		case 10:
			
			puts("\n\tX");
			break;

		case 11:

			puts("\n\tXI");
			break;

		case 12:

			puts("\n\tXII");
			break;

		case 13:

			puts("\n\tXIII");
			break;

		case 14:

			puts("\n\tXIV");
			break;

		case 15:

			puts("\n\tXV");
			break;

		case 16:

			puts("\n\tXVI");
			break;

		case 17:

			puts("\n\tXVII");
			break;

		case 18:

			puts("\n\tXVIII");
			break;

		case 19:

			puts("\n\tXIX");
			break;

		case 20:

			puts("\n\tXX");
			break;

		case 21:

			puts("\n\tXXI");
			break;

		case 22:

			puts("\n\tXXII");
			break;

		case 23:

			puts("\n\tXXIII");
			break;

		case 24:

			puts("\n\tXXIV");
			break;

		case 25:

			puts("\n\tXXV");
			break;

		case 26:

			puts("\n\tXXVI");
			break;

		case 27:

			puts("\n\tXXVII");
			break;

		case 28:

			puts("\n\tXXVIII");
			break;

		case 29:

			puts("\n\tXXIX");
			break;

		case 30:

			puts("\n\tXXX");
			break;


		default:										// a default case if invalid
													// input was entered
			puts("\nInvalid input. Try again\n");
			break;
		}

		
		printf("\nTry again (1/-1)> ");								// prompting the user to select
													// 1 or -1
		scanf_s("%d", &try_again);

		while (try_again != 1 &&								// validating the input
			try_again != -1)
		{
			printf("\nInvalid input. Try agian (1/-1)> ");
			scanf_s("%d", &try_again);
		}
	}

	puts("\nThe program has ended!\n");								// printing message indicating
													// that the program has terminated

	return 0;
}


