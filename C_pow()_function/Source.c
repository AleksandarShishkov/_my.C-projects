




		/*

		A C program which calculates the square and
		the cube values of the numbers 1 trough 10
		using the math.h library`s pow() function.

		*/






#include <stdio.h>											//including the stdio header file
#include <math.h>											// including the math header file


int main()
{

	int num;											// an integer to hold the num value
	int sqr_num;											// an integer to hold the num`s square value
	int cube_num;											// an integer to hold the num`s cube value
	
	printf("\n");


	for (int i = 0; i < 11; i++)									// entering the for loop
	{
		num = i;										// setting num to the value of i
		sqr_num = pow(i, 2);									// setting the sqr_num to the value of i on the power of 2
		cube_num = pow(i, 3);									// setting the cube_num to the valued of i on the power of 3

		printf("\t%d\t%d\t%d\n", num, sqr_num, cube_num);					// printing the formatted output

	}


	printf("\nEnd of the program\n");								// a message indicating the end of the program
	


	return 0;											// terminating the program
}



