// Programmer:		Thecanniestbadge
// Date:			5/29/2023
// Program Name:	Random Numbers
// Description:		This program takes the users first name and last name and comes up with 2 random numbers from 1-100.
//					This program includes printf's, scanf's,stdlib.h and time.h.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <stdlib.h> // Needed for the rand() and for srand()
#include <time.h> // Needed for the function time()

int main(void)
{
	// Constant and Variable Declarations
	int	 pseudoRandom;
	int  randomTrue;
	char userFirstName[50];
	char userLastName[50];
	
	// *** Your program goes here ***
	// *** INPUT ***
	/* This section gets the first name and last name from the user inputs*/
	printf("Enter your First name: ");
	scanf("%s", &userFirstName);
	printf("Enter your last name: ");
	scanf("%s", &userLastName);
	printf("\n"); // Blank line
	// *** PROCESSING ***
	/* This section is where the pseudo-random and true random get calculated */
	/* This area is where the pseudo-random gets calculated*/
	pseudoRandom = rand() % 100 + 1;
	/* This area is where the true random number gets calculated*/
	srand(time(0));
	randomTrue = rand() % 100 + 1;

	// *** OUTPUT ***
	/* This is the section where everything comes together and gets printed to the users screen*/
	printf("%s %s - here are the random numbers: \n", userFirstName, userLastName);
	printf("pseudo-random\t'true' random\n");
	printf("%d\t\t%d\n", pseudoRandom, randomTrue);
	printf("\n"); // blank line


	return 0;
} // end main()