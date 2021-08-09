/* Listing 14.7 - Demonstrates how to clear extra chracters from stdin using fgets(). */
#include <stdio.h>
void clear_kb(void);
int main(void){
	int age;
	char name[20];
	/* Ask user for age. */
	puts("Enter your age:");
	scanf("%d", &age);
	/* Clear stdin of any extra characters */
	clear_kb();
	/* Now ask for user's name */
	puts("Enter your first name:");
	scanf("%s", name);
	/* Display the data */
	printf("Your age is %d.\n", age);
	printf("Your name is %s.\n", name);
	return 0;
}
void clear_kb(void){
	/* clears stdin of any waiting characters */
	char junk[80];
	fgets(junk, 80, stdin);
}


