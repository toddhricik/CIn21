// Listing 17.11 - Use strspn() to find the first postion of string1 whose character is not found in string2
#include <stdio.h>
#include <string.h>
int main(void){
	char buf1[80], buf2[80];
	size_t loc;
	// Input the strings
	printf("Enter the string to be searched: ");
	scanf("%s", buf1);
	printf("Enter the target string to query: ");
	scanf("%s", buf2);
	// Perform the serach
	loc = strspn(buf1, buf2);
	if(loc==0)
		printf("\nNo match was found.\n");
	else
		printf("All characters of string1 match string2 up to position %lu of string1.\n", loc);
  	return 0;
}	
