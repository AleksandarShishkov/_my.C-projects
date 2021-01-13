



		// A C program which uses a menu
		// to prompt the user to make selection 
		// from several options.
		// 
		// In accordance to the selected option the
		// program calculates the sum, the average, 
		// the product, the smallest and the
		// largest of serie of inputed
		// integers.
		//
		// It also calculates the factorial of
		// a single integer.







#include <stdio.h>												// including the stdio directory


int main()
{


	int choice = 0;												// an integer to hold the choice
	int num;												// an integer to hold the inputted value
	int sum = 0;												// an integer to hold the sum
	int count = 0;												// an integer to hold th running count
	double avrg = 0;											// a double to hold the average
	int smallest;												// an integer to hold the smallest number
	int largest;												// an integer to hodl the largerst number
	int product = 1;											// an integer to hold the product
	int fact_num;												// an integer to hold the value for the factoriel


	while (choice != 9)											// entering the while loop
	{

		puts("\n\n\tSelect between the following: \n");							// printing the menu
		puts("\nType  '1'  to sum serie of integers");
		puts("Type  '2'  to calculate the average of serie of integers");
		puts("Type  '3'  to view the smallest in serie of integers");
		puts("Type  '4'  to view the largest in serie of integrs");
		puts("Type  '5'  to sum all the even numbers in serie of integers");
		puts("Type  '6'  to calculate the product of all the odd numbers in ");
		puts("serie of integers");
		puts("Type  '7'  to calculate the facotiral of an integer");
		puts("Type  '9'  to exit the program");
		printf("> ");
		scanf_s("%d", &choice);										// prompting the user to enter the choice


		switch (choice)											// a switch statement for the choice
		{

		case 1:

			puts("\n\tYou have selected 'sum of integers'\n");

			printf("Enter an integer. To quit type '-1'> ");					// prompting the user to enter serie of integers
			scanf_s("%d", &num);


			while (num != -1)									// entering the sentinel-controlled loop
			{
				sum += num;									// summing the inputted integers

				printf("Enter an integer. To quit type '-1'> ");
				scanf_s("%d", &num);

			}

			printf("\nThe sum is: %d\n", sum);							// printing the result

			break;


		case 2:

			puts("\n\tYou have selected 'average of integers'\n");


			printf("Enter an integer. To quit type '-1'> ");					// prompting the user to enter serie of integers
			scanf_s("%d", &num);

			while (num != -1)									// entering the sentinel-controlled loop
			{
				avrg += num;									// summing the onputted integers
				count++;									// incrementing the count


				printf("Enter an integer. To quit type '-1'> ");
				scanf_s("%d", &num);
			}

			avrg /= count;										// calculating the average

			printf("\nThe average is: %.2f\n", avrg);						// printing the result

			break;

		case 3:

			puts("\n\tYou have selected 'smallest in the serie'\n");

			printf("Enter an integer. To quit type '-1'> ");					// prompting the user to enter serie of integers
			scanf_s("%d", &num);

			smallest = num;										// assigning the first integer to the smallest variable

			while (num != -1)									// entering the sentinel-controlled lopp
			{
				if (smallest > num)								// validating the input
					smallest = num;								// assigning the next inputted integer if valid

				printf("Enter an integer. To quit type '-1'> ");
				scanf_s("%d", &num);
			}

			printf("\nThe smallest number enterd is: %d\n", smallest);				// printing the result

			break;

		case 4:

			puts("\n\tYou have selected 'largest in the serie'\n");

			printf("Enter an integer. To quit type '-1'> ");					// prompting the user to enter serie of integers
			scanf_s("%d", &num);

			largest = num;										// assigning the first integer to the largest variable

			while (num != -1)									// entering the sentinel-controlled loop
			{
				if (largest < num)								// validating the input
					largest = num;								// assinging the next inputted integer if vald

				printf("Enter an integer. To quit type '-1'> ");
				scanf_s("%d", &num);

			}

			printf("\nThe largest number enterd is: %d\n", largest);				// printing the result

			break;


		case 5:

			puts("\n\tYou have selected 'sum of the even numbers in the serie'\n");

			printf("Enter an integer. To quit type '-1'> ");					// prompting the user to enter serie of integers
			scanf_s("%d", &num);

			while (num != -1)									// entering the sentinel-controlled loop
			{
				if (num % 2 == 0)								// validating the input
					sum += num;								// summing the integers if valid

				printf("Enter an integer. To quit type '-1'> ");
				scanf_s("%d", &num);
			}

			printf("\nThe sum of all of the even numbers is: %d\n", sum);				// printing the result
				
			break;


		case 6:

			puts("\n\tYou have selected 'product of the odd numbers in the serie'\n");

			printf("Enter an integer. To quit type '-1'> ");					// prompting the user to enter serie of integers
			scanf_s("%d", &num);



			while (num != -1)									// entering the sentinel-controlled loop
			{
				if (num % 2 != 0)								// valdiating the input
					product *= num;								// multiplying the odd integers

				printf("Enter an integer. To quit type '-1'> ");
				scanf_s("%d", &num);

			}

			printf("\nThe product of all of the odd numbers is: %d\n", product);			// printing the result

			break;


		case 7:

			puts("\n\tYou have selected 'factorial of an integer'\n");

			printf("Enter an integer> ");								// prompting the user to enter an integer
			scanf_s("%d", &fact_num);

			int fact = 1;										// an integer to hold the facotiral

			if (fact_num < 0)									// validating the input
				printf("\nError. Invalid integer!");
			else
				for (int i = 1; i < fact_num; i++)
					fact *= i;								// calculating the factorial

			printf("\nThe factorial of %d is: %d\n", fact_num, fact);				// printing the result

			break;


		case 9:

			puts("\n\tThe program has terminated!\n");						// printing a message indicating that the
														// program has ended
			break;

		default:											// a default case if invalid option is
														// selected
			printf("\nInvalid input. Try again> \n");
			break;

		}



	}
	





	return 0;
}

