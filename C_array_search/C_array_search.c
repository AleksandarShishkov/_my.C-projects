


/*
 A C program that prompts an input
 from the user for the size and the
 elements of an dynamicalli allocated array.
 
 It then sort`s the array and prints all
 of the elements whose value does not repete
 in the array.
 */





#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>


void get_data(int*, int);													// a function prototype
void sort_arr(int*, int);													// a function protoype
void search_arr(int*, int);													// a function prototype


int main()
{


	int size;														// an integer to hold the size
	int* arr = NULL;													// a pointer to an int

	char another_try;													// a char to hold the user`s choice

	bool try_again = true;													// a boolean to control the loop


	while (try_again)
	{

		puts("\nEnter the size of the array> ");									// promting the user to enter
		scanf_s("%d", &size);												// the size

		while (size < 1)												// validating the input
		{
			printf("\n'%d' cannot be a valid size. Try again> ", size);
			scanf_s("%d", &size);
		}

		arr = (int*)malloc(size, sizeof(int));										// allocating the memory for 
																// the array

		get_data(arr, size);												// calling get_data function
		sort_arr(arr, size);												// calling sort_array function
		search_arr(arr, size);												// calling search_arr function



		getchar();
		puts("\nAnother try (y/n)> ");											// promting the user to select
		scanf_s("%c", &another_try);											// whether another array
																// will be created

		while (tolower(another_try) != 'y' &&										// validating the input
			tolower(another_try) != 'n')
		{
			printf("'%c' cannot be a valid input. Try again> ");
			scanf_s("%c", &another_try);
		}

		if (another_try == 'y')
		{
			try_again = true;											// assigning true to try_again	
		}
		else
		{
			try_again = false;											// assigning false to try_again
		}
		
		
		
		
	}


	puts("\nThe program has ended!\n");											// a message indicating that
																// the program has ended

	
	free(arr);														// freeing the allocated memory

	return 0;
}


void get_data(int* arr, int size)												// a function definition for
{																// the elements in the array

	printf("\nEnter %d elements (1 - 100): \n", size);									// promting an input from the user

	for (int i = 0; i < size; i++)
	{
		printf("Element #%d> ", i + 1);
		scanf_s("%d", &*(arr + i));

		while (*(arr + i) < 1 || *(arr + i) > 100)									// validating the input
		{
			printf("'%d' cannot be a valid value. Try again> ", *(arr + i));
			scanf_s("%d", &*(arr + i));
		}
	}
}

void sort_arr(int* arr, int size)												// a function definition for
{																// sorting the elements

	for (int i = 0; i < size - 1; i++)									
	{
		int min = *(arr + i);												// an integer to hold the current
																// value

		int index = i;													// an integer to hold the current
																// index

		for (int j = i + 1; j < size; j++)
		{
			if (*(arr + j) < min)											// validating the elements
			{
				min = *(arr + j);
				index = j;
			}
		}

		int temp = min;													// swapping the elements
		*(arr + index) = *(arr + i);
		*(arr + i) = temp;
	}

}

void search_arr(int* arr, int size)												// a function definition for
{																// searching for repeatable value

	for (int i = 0; i < size; i++)
	{
		int num = *(arr + i);												// an integer to hold the current
																// element

		int dble_num = 0;												// an integer to keep count of
																// the repeatable elements

		for (int j = 0; j < size; j++)
		{
			if (*(arr + j) == num)											// validating the elements
				dble_num += 1;
		}

		if (dble_num < 2)												// printing the element if
			printf("%d ", *(arr + i));										// not repeated

	}
}



