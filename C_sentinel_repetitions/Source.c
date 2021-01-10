





		/*

		 A C program that prompts the user to
		 input floating point numbers in order to
		 calculate their total. The program uses sentinel-
		 control repetitions trough which prints
		 the current result and it also keeps a running total
		 for the end result.

		*/






#include <stdio.h>												// including stdio.h header file


int main()
{


		
	float fuel;												// a float to hold the amount of fuel
	float miles;												// a float to hold the miles driven
	float current_total;											// a float to hold the current total
	float total = 0.0;											// a float to hold the total result




	printf("\nEnter the gallons used> (-1 to quit) ");							// prompting the user to enter the fuel used
	scanf_s("%f", &fuel);											// assigning the value to fuel

	while (fuel != -1 && fuel < 1)										// validating the input
	{
		printf("\nInvalid value. Try again> ");
		scanf_s("%f", &fuel);
	}

	
	
	while(fuel != -1)											// entering the sentinel-controlled loop
	{
		printf("\nEnter the misles driven> ");								// prompting the user to enter the miles driven
		scanf_s("%f", &miles);										// assigning the value to miles

		while (miles < 1)										// validating the input
		{
			printf("\nInvalid value. Try again> ");
			scanf_s("%f", &miles);
		}

		
		current_total = miles / fuel;									// calculating the current total

		printf("\nYou`ve travelled %.2f miles per gallon\n",						// printing formatted output
			current_total);

		total += current_total;										// adding current_total to total

		printf("\nEnter the gallons used> (-1 to quit) ");						// prompting the user to enter the next value for fuel
		scanf_s("%f", &fuel);

		while (fuel != -1 && fuel < 1)									// validating the input
		{
			printf("\nInvalid value. Try again> ");
			scanf_s("%f", &fuel);
		}
		
	}													// end of the loop


	printf("\nThe total miles per gallon travelled : %.3f\n", total);					// printing formatted output for the total value


	printf("\nThe program`s ended!\n");									// printing message indicating that
														// the program has ended


	return 0;


}
