/* Name:	find_nbr.c
 * Purpose:	This program picks a random number and then
 * 			lets the user try to guess it
 * Retruns:	Nothing
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NO 0
#define YES 1

int main(void)
{
	int guess_value = -1;
	int number;
	int nbr_of_guesses;
	int done = NO;

	printf("\n\nGetting a Random number\n");

	/* use the time to seed the random number generator */
	srand( (unsigned) time( NULL ) );
	number = rand();
	printf("\nPSSSSSST.... The number is %d!\n", number);

	nbr_of_guesses = 0;
	while(done==NO){
		printf("\nPick a number between 0 and %d: ", RAND_MAX);
		scanf("%d", &guess_value);

		nbr_of_guesses++;

		if(number==guess_value)
			done = YES;
		else{
			if(number < guess_value)
				printf("\nYour guess is too high!");
			else
				printf("\nYour guess is too low!");
		}		
	}
	
	printf("\n\nCongratulations! You correctly guessed the number using %d guesses!", nbr_of_guesses);
	printf("\n\nThe number was %d\n\n", number);

	return 0;
}
