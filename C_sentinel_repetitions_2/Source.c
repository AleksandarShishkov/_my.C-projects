


		/*

		 This C program prompts the user to
		 enter numeric values trough a sentinel
		 controlled loop in order to calculate
		 whether a monthly banks ballance`s been
		 exceeded.

		 To terminate the loop, the user should
		 input '-1' for the firts parameter.

		*/





#include <stdio.h>										// including stdio header file


int main()
{

	int acc_num;										// an int to holed the account number
	float current_ballance;								// a float to hold the current ballance
	float charges;										// a float to hold the amount of charges
	float credits;										// a float to hold the amount of credits
	float new_ballance;									// a float to hold the new ballance


	printf("\n\nEnter the account number ");			// prompting the user to enter the
	printf("or press -1 to quit> ");					// account number
	scanf_s("%d", &acc_num);

	while (acc_num < 0 && acc_num != -1)				// validating the input
	{
		printf("\nInvalid valie. Try again> ");
		scanf_s("%d", &acc_num);
	}

	while (acc_num != -1)								// entering the sentinel-controlled loop
	{
		printf("\nEnter the beggining amount $ ");		// prompting the user to enter the
		scanf_s("%f", &current_ballance);				// current ballance

		while (current_ballance < 0)					// validating the input
		{
			printf("\nInvalid input. Try again> $ ");
			scanf_s("%.2f", &current_ballance);
		}

		printf("\nEnter the total amount of charges ");	// prompting the user to enter the
		printf("for the month> $ ");					// amount of the charges
		scanf_s("%f", &charges);

		while (charges < 0)								// validating the input
		{
			printf("\nInvalid input. Try again> $ ");
			scanf_s("%.2f", &charges);
		}

		printf("\nEnter the total amount of credits ");	// prompting the user to enter
		printf("for the month> $ ");					// the amount of the credits
		scanf_s("%f", &credits);

		while (credits < 0)								// validating the input
		{
			printf("\nInvalid input. Try again> $ ");
			scanf_s("%.2f", &credits);
		}

		new_ballance = (current_ballance +				// calculating the new ballance
			charges) - credits;


		printf("\n\nAccount: %d", acc_num);				// printing the formatted output
		printf("\nCredit limit: $%.2f", current_ballance);
		printf("\nBallance: $%.2f", new_ballance);

		if (new_ballance > current_ballance)			// validating the new ballance
			printf("\nCredit limit exceeded\n");		// printing message if valid	


		printf("\n\nEnter the account number ");		// prompting the user to enter 
		printf("or press -1 to quit> ");				// the next account number
		scanf_s("%d", &acc_num);

		while (acc_num < 0 && acc_num != -1)			// validating the input
		{	
			printf("\nInvalid valie. Try again> ");
			scanf_s("%d", &acc_num);
		}

	}

	printf("\nThe program`s ended!\n");					// printing message indicating
														// that the program`s ended

	return 0;
}

