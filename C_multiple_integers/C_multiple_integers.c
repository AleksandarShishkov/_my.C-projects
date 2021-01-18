



		/*
		 A C program that prompts the user
		 to enter two integers and calculates
		 whether the second integer is multiple
		 to the first one.
 
		 The calculations are made trough serie of
		 iterations in which the multiple() function is called. 
		 To quit entering the user presses '-1'
		 */






#include <stdio.h>											
#include <stdbool.h>													// including stdbool header
															// for the boolean operations


bool multiple(int, int);												// function`s prototype

int main()
{


	int num1 = 0;													// an integer to hold num1
	int num2 = 0;													// an integer to hold num2

	while (num1 != -1 || num2 != -1)										// a sentinel controlled loop
	{

		puts("\nEnter two integers. To quit ");
		puts("entering type '-1'\n");

		puts("num1> ");												// prompting the user to enter 
		scanf_s("%d", &num1);											// num1

		if (num1 == -1)												// validating the input
			break;												// exiting the loop if true

		puts("num2> ");												// prompting the user to enter
		scanf_s("%d", &num2);											// num2

		if(num2 == -1)												// validating the input
			break;												// exiting the loop if true

		if (multiple(num1, num2))										// validating the returned value
			printf("\n'%d' is multiple to '%d'\n", num2, num1);						// printing the result if true
		else
			printf("\n'%d' isn`t multiple to '%d'\n", num2, num1);						// printing the result if false

	}

	puts("\nThe program has ended!\n");										// a message indicating that the
															// program has ended

	return 0;
}


bool multiple(int a, int b)												// a function definition
{
	if (a % b == 0)
		return true;
	else
		return false;
}


