// Listing 17.10 - use strcspn.c to search string1 for a character that exists in string2
#include <stdio.h>
#include <string.h>
int main(void){
	char buf1[80], buf2[80];
	size_t loc;
	// Input the stings
	printf("Enter string1 which is to be searched: ");
	scanf("%s", buf1);
	printf("Enter string2 which is to be used a the query: ");
	scanf("%s", buf1);
	// Perform the search
	loc = strcspn(buf1, buf2);
	if(loc==strlen(buf1))
		printf("\nNo match was found.\n");
	else
		printf("\nThe first match was found at postion %lu.\n", loc);
	return 0;
}
