/* Listing 14.8 - Demonstrates how to clear extra chracters from stdin using fflush(). */
#include <stdio.h>
int main(void){
	int age;
	char name[20];
	/* Ask user for age. */
	puts("Enter your age:");
	scanf("%d", &age);
	/* Clear stdin of any extra characters */
	fflush(stdin);
	/* Now ask for user's name */
	puts("Enter your first name:");
	scanf("%s", name);
	/* Display the data */
	printf("Your age is %d.\n", age);
	printf("Your name is %s.\n", name);
	return 0;
}
