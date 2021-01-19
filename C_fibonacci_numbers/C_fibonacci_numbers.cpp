



/*
 A C program which prompts
 the user for an input and
 displays the fibonacci numbers
 up to the integer entered.
 */





#include <stdio.h>



void fibonacci(int);											// a function prototype

int main()
{

	int num = 1;												// an integer to hold the user`s
																// integer

	while (num != -1)											// a sentinel-controlled loop
	{
		puts("\n\nEnter an integer.");							// prompting the user to enter
		puts("To quit entering press '-1'> ");					// an integer
		scanf_s("%d", &num);

		if (num == -1)											// validating the input
			break;
		else if (num < 1)
		{
			puts("\nTry again.");
			continue;
		}
		
		fibonacci(num);											// calling the fibonacci() function
		
	}

	puts("\n\n\tThe program`s ended!\n");						// a message indicating that the
																// program has ended

	return 0;
}


void fibonacci(int num)											// a function definition with
{																// an argument for the user`s input

	int num1 = 0;												// an integer to hold the first number
	int num2 = 1;												// an integer to hold the second number
	int nextNum = 0;											// an integer to hold the next fibonacci number


	printf("\n\nThe fibonacci numbers upt to '%d' are: \n", num);
	printf("%d %d ", num1, num2);								// printing the first two fibonacci
																// numbers
	nextNum = num1 + num2;										// adding the values of the first and
																// second numbers and assigning it to
																//nextNum

	while (nextNum <= num)
	{
		printf("%d ", nextNum);									// printing next num
		num1 = num2;											// swappint num1 and num2
		num2 = nextNum;											
		nextNum = num1 + num2;									// calculating the next fibonacci number and
																// assigning it to nextNum
	}
	
}