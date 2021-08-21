// Listing 17.9 - Use strchr() to search a string for the occurence of a character
#include <stdio.h>
#include <string.h>
int main(void){
	char *loc, buf[80];
	int ch;
	// Input the string and the charcter for which you wish to search
	printf("Enter the string to be searched: ");
	scanf("%s", buf);
	printf("\nEnter the character for which you would like to search within the string: ");
	ch = getchar();
	// Perform the search
	loc = strchr(buf, ch);
	if(loc==NULL)
		printf("The character %c was not found.\n", ch);
	else
		printf("The character %c was found at position %ld.\n", ch, loc-buf);
	return 0;
}	
