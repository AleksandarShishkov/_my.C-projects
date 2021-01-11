






		//A C program which prompts an input
		//from the userand and prints an
		//object`s shape.

		//The selection is made trough a menu
		//and switch statement.The user can
		//determine whether another option will
		//be chosen.



#include <stdio.h>															// including the stdio header file


int main()
{



	int x;																	// an integer to hold the x coordinate
	int y;																	// an integer to hold the y coordinate
	int choice;																// an integer to hold the user`s choice
	char new_try = 'y';														// a char for the do-while loop assigned with 'y'

	do																		// entering the do-while loop
	{

		printf("\n\tSelect between the following:\n");						// printing the menu
		printf("\n'1' square");
		printf("\n'2' empty square");
		printf("\n'3' triangle");
		printf("\n'4' empty triangle");
		printf("\n'5' chekboard");

		printf("\n> ");														// prompting the user make a selection
		scanf_s("%d", &choice);												// assigning the input to choice

		switch (choice)														// switching the choice
		{
		case 1:

			printf("\n\tSquare\n");											// printing the selected shape`s name

			printf("\nEnter x coordinate> ");								// prompting the user to input value for x
			scanf_s("%d", &x);
			printf("\nEnter y coordinate> ");								// prompting the user to input value for y
			scanf_s("%d", &y);

			printf("\n");

			for (int i = 0; i < x; i++)										// entering the nested loop
			{
				for (int j = 0; j < y; j++)
				{
					printf("* ");											// printing the structure
				}

				printf("\n");
			}

			break;

		case 2:														
							
			printf("\n\tEmpty square\n");									// printing the selected shape`s name

			printf("\nEnter x coordinate> ");								// prompting the user to input value for x
			scanf_s("%d", &x);
			printf("\nEnter y coordinate> ");								// prompting the user to input value for y
			scanf_s("%d", &y);

			printf("\n");

			for (int i = 0; i < x; i++)										// entering the nested loop
			{
				for (int j = 0; j < y; j++)
				{
					if (i == 0 || i == x - 1 ||								
						j == 0 || j == y - 1)
						printf("* ");										// printing the structure
					else
						printf("  ");
				}

				printf("\n");
			}

			break;

		case 3:

			printf("\n\tTriangle\n");										// printing the selected shape`s name

			printf("\nEnter x coordinate> ");								// prompting the user to input value for x
			scanf_s("%d", &x);

			printf("\n");

			for (int i = 0; i < x; i++)										// entering the nested loop
			{
				for (int j = i; j < x; j++)
				{
					printf("* ");											// printing the structure
				}

				printf("\n");
			}

			break;

		case 4:

			printf("\n\tTriangle\n");										// printing the selected shape`s name

			printf("\nEnter x coordinate> ");								// prompting the user to input value for x
			scanf_s("%d", &x);

			printf("\n");

			for (int i = x - 1; i >= 0; i--)								// entering the nested loop
			{
				for (int j = 0; j <= i; j++)
				{
					if (i == x - 1 || j == 0 || j == i)
						printf("* ");										// printing the structure
					else
						printf("  ");
				}

				printf("\n");
			}

			break;

		case 5:

			printf("\n\tCheckboard\n");										// printing the selected shape`s name

			printf("\nEnter x coordinate> ");								// prompting the user to input value for x
			scanf_s("%d", &x);
			printf("\nEnter y coordinate> ");								// prompting the user to input value for y
			scanf_s("%d", &y);

			printf("\n");

			for (int i = 0; i < x; i++)										// entering the nested loop
			{
				for (int j = 0; j < y; j++)
				{
					if (i % 2 == 0)
						printf("* ");										// printing the structure
					else
						printf(" *");
				}

				printf("\n");
			}

			break;

		default:

			printf("\nInvalid option. Try again>\n");						// printing error message if invalid
																			// selection is made

			break;

		}


		getchar();

		printf("\nAnother try? (y/n)> ");									// prompting the user to select new_try
		scanf_s("%c", &new_try);

		while (new_try != 'y' && new_try != 'n')							// validating the input
		{
			printf("\nInvalid input. Try again. (y/n)> ");
			scanf_s("%c", &new_try);
		}


	}while (new_try == 'y');												// exiting the loop if new_try != 'y'



	printf("\nThe program has ended!\n\n");									// printing message indicating the end
																			// of the program



	return 0;
}