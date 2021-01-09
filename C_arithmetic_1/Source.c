







		/*

		A simple C program that prompts the user to
		enter three integers and test different
		arithmetic operations on them.

		An if-else if clauses are users in order
		the largest and the smallest from the 
		three numbers to be detemrined.

		*/





#include <stdio.h>																// including the stdio header file for i/o



int main()														
{

	int num1;																	// an integer to hold num1
	int num2;																	// an integer to hold num2
	int num3;																	// an integer to hold num3
	int result;																	// an integer to hold the result



	printf("\nEnter 3 integers separated by a space> ");						// prompting the user to enter the
	scanf_s("%d %d %d", &num1, &num2, &num3);									// three integers


	result = num1 + num2 + num3;												// calculating the sum
	printf("\nSum: %9.d", result);												// printing formatted output


	result = num1 - num2 - num3;												// calculating the difference
	printf("\nDifference: %d", result);											// printing formatted output


	result = num1 * num2 * num3;												// calculating the product
	printf("\nProduct: %6.d", result);											// printing formatted output


	result = num1 + num2 + num3 / 3;											// calculating the average
	printf("\nAverage: %5.d", result);											// printing formatted output

		
	if (num1 > num2 && num1 > num3)												// validating which of the
		printf("\nLargest: %5.d", num1);										// integers is the largest and
	else if (num2 > num1 && num2 > num3)										// printing formatted output
		printf("\nLargest: %5.d", num2);
	else if (num3 > num1 && num3 > num2)
		printf("\nLargest: %5.d", num3);

	if (num1 < num2 && num1 < num3)												// validating which of the 
		printf("\nSmallest: %3.d", num1);										// integers is the smallest and
	else if (num2 < num1 && num2 < num3)										// printing formatted output
		printf("\nSmallest: %3.d", num2);
	else if (num3 < num1 && num3 < num2)
		printf("\nSmallest: %3.d\n", num3);



	printf("\nThe program has ended!\n");										// printing a message for end of the program


	return 0;																	// exiting the program
}