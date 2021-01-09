



		/*

		This C program takes an input from the user and
		calculates the area, diameter and circumference
		of a circle.

		Validation for the input is managed trough a
		while loop. After the calculations a formatted
		output is printed on the screen

		*/





#include <stdio.h>										// including the stdio header file


const float Pi = 3.14159;									// a constnd float to hold Pi


int main()
{

		
	float radius;										// a float to hold the radius
	float circumference;									// a float to hold the circumference
	float area;										// a float to hold the area
	float diameter;										// a float to hold the diameter



	printf("\nEnter the radius of the circle> ");						// prompting the user for an input
	scanf_s("%f", &radius);

	while (radius < 0.0)									// validating the input
	{
		printf("\nInvalid input. Try again> ");
		scanf_s("%f", &radius);
	}


	diameter = 2 * radius;									// calculating the diameter
	circumference = Pi * diameter;								// calculating the circumference
	area = Pi * (radius * radius);								// calcualting the area


	printf("\nDiameter: %15.2f", diameter);							// printing formatted output for the diameter
	printf("\nCircumference: %10.2f", circumference);					// printing formatted output for the circumference
	printf("\nArea: %20.2f", area);								// printing formatted output for the area
		
	printf("\n\n\tEnd of the program!\n\n");						// printing a message to indicate the end of the program


	return 0;										// exciting the program

}
