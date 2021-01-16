



		/*
		 A C program that prompts the user
		 to enter an integer and calculates
		 it`s factorial.
 
		 It then prints it on the screen.
		 */




#include <stdio.h>


int factorial(int);															// prototype of the factorial() function


int main()
{

	int num = 1;															// an integer to hold the inputted number

	while (num != 0)
	{

		puts("\nEnter an integer. To quit entering press '0' > ");			// prompting the user to enter an integer
		scanf_s("%d", &num);

		if (num < 0)														// validating the input
			puts("\nInvalid integer.");
		else if (num == 0)
			puts("\nThe program has ended!\n");
		else
			printf("\nFactorial of !%d is: %d\n", num, factorial(num));		// calling the factorial() function
																			// and printing the result
	}


	return 0;
}


int factorial(int num)														// definition of the factorial() function
{																			// with an argument for the inputted number

	if (num < 1)
		return 1;
	else
		return num * factorial(num - 1);

}


