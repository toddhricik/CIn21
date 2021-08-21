// Listing 17.12 - Using strstr() to find the first occurrenc of string1 within string2
#include <stdio.h>
#include <string.h>
int main(void){
	char *loc, buf1[80], buf2[80];
	// Input the strings
	printf("Enter the string1 which you want to search for in string2: ");
	scanf("%s", buf1);
	printf("Enter the string2 which you want to search for the existence of string1: ");
	scanf("%s", buf2);
	// Perform the search
	loc = strstr(buf1, buf2);
	if(loc==NULL)
		printf("\nstring1 was not found in string2.\n");
	else
		printf("\n%s of string1 was found at postion %d in string2.\n", buf1, loc-buf2);
   return 0;
}   
