/* Demonstrates using scanf() to input numerica and text data. */

#include <stdio.h>

char lname[257], fname[257];
int count, id_num;

int main(void){
	/* Prompt the user. */
	puts("Enter last name, first name and ID number separated by spaces then press Enter.\n");
	
	/* Input the three data items */
	count = scanf("%s%s%d", lname, fname, &id_num);

	/* Display the data */
	printf("%d items entered: \t%s\n\t\t\t%s\n\t\t\t%d\n", count, fname, lname, id_num);

	return 0;
}	
