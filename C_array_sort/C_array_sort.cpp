


/*
 A C program that promts the user
 to enter the values for 10 elements in
 an integer array. It then sorts
 the elements and print the array and
 the number of the iterations passed.
 */





#include <stdio.h>

#define SIZE 10														// defining global variable SIZE

void bubble_sort(int[]);											// a function definition for the
																	// bubble sort with an argument for
																	// the array

void selection_sort(int[]);											// a function definition for the
																	// selection sort with an argument
																	// for the array


void get_data(int[]);												// a function definition for the 
																	// user input with an argument
																	// for the array


int main()
{

	int arr[SIZE];													// an array of integers


	get_data(arr);													// calling get_data function

												
	bubble_sort(arr);												// calling bubble_sort function
	
	
	selection_sort(arr);											// calling selection_sort function



	puts("\nThe program has ended!\n");								// a messsage indicating that
																	// the program has ended
		

	return 0;
}


void get_data(int arr[])											// function definition
{
	printf("\nEnter %d elements:\n", SIZE);

	for (int i = 0; i < SIZE; i++)									// promting the user to enter the
	{																// elements
		printf("Enter element #%d> ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	puts("\nThe array is: ");										// printing the unsorted array

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
}

void bubble_sort(int arr[])											// function definition
{

	bool swap;														// a boolean swap
	int temp;														// an integer to hold the 
																	// temporary value

	int num_iterations = 0;											// an integer to keep count of
																	// the number of iterations

	do
	{
		swap = false;												// setting swap to false

		for (int i = 0; i < SIZE - 1; i++)
		{
			if (arr[i] > arr[i + 1])								// validating the current and the
			{														// following element

				temp = arr[i];										// swapping the values
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				swap = true;
				num_iterations += 1;								// adding 1 to num_iterations
			}
		}

	} while (swap);


	puts("\n\nBubble sort:");

	for (int i = 0; i < SIZE; i++)									// printing the sorted array
	{
		printf("%d ", arr[i]);
	}

	printf("\nIterations: %d\n", num_iterations);					// printing the number of iterations
}


void selection_sort(int arr[])										// a function definition
{

	int num_iterations = 0;											// an integer to hold the number
																	// of iterations

	for (int i = 0; i < SIZE - 1; i++)								
	{
		int minValue = arr[i];										// an integer to hold the current
																	// element

		int index = i;												// an integer to hold the current
																	// index

		for (int j = i + 1; j < SIZE; j++)
		{
			if (arr[j] < minValue)									// validating the current element
																	// the follwoing elements
			{
				minValue = arr[j];
				index = j;
				
			}
		}

		num_iterations += 1;										// adding 1 to num_iterations
		int temp = minValue;										// swapping the elements
		arr[index] = arr[i];
		arr[i] = temp;
	}


	puts("\n\nSelection sort:");

	for (int i = 0; i < SIZE; i++)									// printing the sorted array
	{
		printf("%d ", arr[i]);
	}

	printf("\nIterations: %d\n", num_iterations);					// printing the number of the
																	// iterations

}


