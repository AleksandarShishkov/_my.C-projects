



		/*
		 A C program which prompts the
		 user to enter coordinates for
		 two points and calculates the
		 distance between them.
		 */



#include <stdio.h>
#include <math.h>											// including the math.h header for
															// sqrt() function


double distance(double, double, double, double);			// a function prototype with four
															// parameters for x1, x2, y1, y2

int main()
{

	double x1 = 1.1;										// a double to hold x1
	double x2;												// a double to hold x2
	double y1;												// a double to hold y1
	double y2;												// a double to hold y2

	while (x1 != -1)										// a sentinel-controlled loop
	{

		puts("\n\tEnter coordinates for the two points.");	// prompting the user to enter the input for 
															// the four coordinates
		puts("\tTo quit entering press '-1' for x1 coordinate");

		puts("\nx1> ");										
		scanf_s("%lf", &x1);

		if (x1 == -1)										// validating the input for x1
			break;

		puts("x2> ");
		scanf_s("%lf", &x2);
		puts("\ny1> ");
		scanf_s("%lf", &y1);
		puts("y2> ");
		scanf_s("%lf", &y2);

		printf("\nThe distance between point %.2f, %.2f and point %.2f, %.2f is : %.2f\n",		// printing formatted output
			x1, x2, y1, y2, distance(x1, x2, y1, y2));

	}

	puts("\n\tThe program has ended!\n");

	return 0;
}


double distance(double x1, double x2, double y1, double y2)										// a function definition
{

	double distance = sqrt(x2 - x1) + sqrt(y2 - y1);											// calculating the distance
	return sqrt(distance);																		// returning sqrt(distance)

}