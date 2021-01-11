


		/*
		 A simple C program which prompts
		 the user to enter a series of integers
		 and uses sentinel control loop to calculate
		 the largest and the smallest numbers entered.

		 It also keeps running total of the numbers
		 entered. It print`s the output on the screen.
		*/



#include <stdio.h>											// including stdio header file

int main()
{

	int num;												// an integer to hold the input
	int min;												// an integer to hold the largest value
	int max;												// an integer to hold the smallest value
	int total = 0;											// an integer to keep running count


	printf("\nEnter an integer (-1 to quit)> ");			// prompting the user to enter an integer
	scanf_s("%d", &num);

	max = num;												// assigning the initial value to max
	min = num;												// assigning the initial value to min


	while (num != -1)										// entering the sentinel controlled loop
	{
		if (max < num)										// validating the max value
			max = num;

		if (min > num)										// validating the min value
			min = num;

		total++;											// incrementing the total variable

		printf("\nEnter an integer (-1 to quit)> ");		// prompting the user to enter the next
		scanf_s("%d", &num);								// integer

	}


	printf("\nLargest number:        %d", max);				// printing a formatted output for the
															// largest number

	printf("\nSmallest number:       %d", min);				// printing a formatted output for the
															// smallest value

	printf("\nTotal numbers entered: %d", total);			// printing a formatted output for the
															// total numbers enterd


	printf("\n\nThe program has ended!\n");					// prrionting a message indicating the
															// end of the program


	return 0;
}


