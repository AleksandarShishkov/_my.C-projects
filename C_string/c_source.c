



		/*	
			A C program which manipulates
			an array of characters trough
			serie of options.
	
			The user can quit the program by
			selecting option '0'.
		*/




#include <stdio.h>														
#include <ctype.h>																			
#include <string.h>



int options();												// a function prototype for the options
void enter_string(char[]);													
													// a dunction protytype for string input
													// with parameter for the char array

int size_string(char[]);										// a function prototype for the string size
													// with parameter for the char array

void view_string(char[]);										// a function prototype for priting the string
													// with parameter for the char array

void reverse_string(char[]);										// a function prototype for reversing the string
													// with parameter for the char array

void part_string(char[]);										// a function prototype for printing part
													// of the string with parameter for the 
													// char array

char smallest_letter(char[]);										// a function prototype for the smallest
													// letter in the string with parameter
													// for the char array

char lagerst_letter(char[]);										// a function prototype for the largest
													// letter in the string with parameter
													// for the char array

void add_character(char[]);										// a function prototype for adding a character
													// with parameter for the char array



int main()
{

	char strArr[100] = { '0' };									// a char array with 1st element set to '0'

	int choice = 1;											// an integer to hold the choice
	int size_arr;											// an integer to hold the size
	char smallest;											// a char to hold the smallest letter
	char largest;											// a char to hold the larhest letter


	while (choice != 0)										// a user-controlled loop
	{

		choice = options();									// calling options() function


		if (choice == 1)									// validating the input
		{
			enter_string(strArr);								// calling enter_string() function
			puts("\nThe string`s been created!\n");
		}
		else if (choice == 2)
		{

			if (strlen(strArr) > 1)								// validating whether a string`s been
			{										// created

				size_arr = size_string(strArr);						// calling size_string() function
				printf("\nThe size of the string is: \n%d\n", size_arr);
			}
			else
				puts("\nYou must create a string first!");
		}
		else if (choice == 3)
		{

			if (strlen(strArr) > 1)								// validating whether a string`s been
			{										// created

				puts("\nThe reversed string is: \n");										
				reverse_string(strArr);							// calling reverse_string() function
				
			}
			else
				puts("\nYou must create a string first!");
		}
		else if (choice == 4)
		{
			if (strlen(strArr) > 1)								// validating whether a string`s been
			{										// created

				puts("\bThe string is: \n");
				view_string(strArr);							// calling view_string() function
				
			}
			else
				puts("\nYou must create a string first!");
		}
		else if (choice == 5)
		{

			if (strlen(strArr) > 1)								// validating whether a string`s been
			{										// created

				part_string(strArr);							// calling part_string() function
					
			}
			else
				puts("\nYou must create a string furst!");
		}
		else if (choice == 6)
		{

			if (strlen(strArr) > 1)								// validating whether a string`s been 
			{										// created

				smallest = smallest_letter(strArr);					// calling smallest_letter() function,
													// assigning the value to smallest
				printf("\nThe smallest letter in th string is: \n%c\n", smallest);
			}
			else
				puts("\nYou must create a string first!");
		}
		else if (choice == 7)
		{

			if (strlen(strArr) > 1)								// validating whether a string`s been 
			{										// created

				largest = lagerst_letter(strArr);					// calling largest_letter() function,
													// assigning the value to largest
				printf("\nThe largest letter in the string is: \n%c\n", largest);
			}
			else
				puts("\nYou must create a string first!");
		}
		else if (choice == 8)
		{
			if (strlen(strArr) > 1)								// validating whether a string`s been
			{										// creating

				add_character(strArr);							// calling add_character() function
				puts("The character`s been added!\n");
			}
			else
				puts("\nYou must create a string first!");
		}
		else if (choice < 0 || choice> 7)
		{
			puts("\nInvalid option. Try again!\n");						// printing a message indicating that
													// invalid option was seleted
		}
		else if (choice == 0)
		{
			puts("\nThe program has ended!\n");						// printing a message indicating that
													// the program`s ended
		}
	}




	return 0;
}


int options()												// options() function definition
{
	int choice;											// an integer to hold the choice
		
	puts("\n\nSelect between the following:\n\n");							// printing the options
	puts("\t(1) to create a new string");
	puts("\t(2) to view the size of the string");
	puts("\t(3) to reverse the string");
	puts("\t(4) to view the string");
	puts("\t(5) to view part of the string");
	puts("\t(6) to view the smallest letter");
	puts("\t(7) to view the largest letter");
	puts("\t(8) to add character");
	puts("\t(0) to quit the program");
	puts("\t> ");
	scanf("\t%d", &choice);										// pomting the user to enter the choice


	return choice;											// returning the chocie

}

void enter_string(char strArr[])									// enter_string() option definition
{
	puts("\nEnter the string!\n");									// promting the user to enter the sting

	scanf("%s", strArr);		
}

int size_string(char strArr[])										// size_string() function definition
{
	int size = strlen(strArr);									// an integer to hold the size of the string

	return size;											// returning the size
}

void view_string(char strArr[])										// view_string() function definition
{
	int size = strlen(strArr);									// an integer to hold the size

	for (int i = 0; i < size; i++)								
	{
		printf("%c ", strArr[i]);								// printing the string
	}
}

void reverse_string(char strArr[])									// reverse_string() option definition
{
	int size = strlen(strArr);									// an integer to hold the size

	
	for (int i = 0; i < size; i++)
	{
		printf("%c ", strArr[size - i - 1]);							// printing the reversed string
	}

}

void part_string(char strArr[])										// part_string() function definition
{
	int x;												// an integer to hold the x coordinate
	int y;												// an integer to hold the y coordinate

	int size = strlen(strArr);									// an integer to hold the size


	printf("\nEnter the x coordnate (1 - %d)> ", size);						// promting the user to enter x coordinate
	scanf("%d", &x);

	while (x<1 || x>size)										// validating the input
	{
		printf("\n'%d' cannot be a valid x coordinate. Try again> ");
		scanf("%d", &x);
	}

	printf("\nEnter the y coordinate (%d - %d)> ", x, size);					// prompting the user to enter y coordinate
	scanf("%d", &y);

	while (y < x)											// validating the input
	{
		puts("\n'%d' cannot be valid y coordinate. Try again> ", y);
		scanf("%d", &y);
	}

	puts("\nThe string is: \n");															

	for (int i = x; i <= y; i++)
	{
		printf("%c ", strArr[i]);								// printing the string
	}
}

char smallest_letter(char strArr[])									// smallest_letter() function definition
{
	char smallest = strArr[0];									// a char to hold the smallest letter
													// assigned to the first element in
													// the array

	for (int i = 0; i < strlen(strArr); i++)												
	{
		if (smallest > strArr[i])								// validating the smallest letter
			smallest = strArr[i];
	}

	return smallest;										// returning smallest 
	
}

char lagerst_letter(char strArr[])									// largest_letter() function definition
{
	char largest = strArr[0];									// a char to hold the largest letter
													// assigned to the first element in
													// the array

	for (int i = 0; i < strlen(strArr); i++)
	{
		if (largest < strArr[i])								// validating the largest letter
			largest = strArr[i];
	}

	return largest;											// returning largest
}

void add_character(char strArr[])									// add_character() function definition 
{
	char letter;											// a char to hold the litter
	getchar();											// clearing the memory buffer


	puts("\nEnter the letter (space is also an option)> ");						// promting the user to enter the character
	scanf("%c", &letter);

	int size = strlen(strArr) + 1;									// adding 1 to the current size

	strArr[size - 1] = letter;									// assigning the letter to the newly 
													// created element
}


