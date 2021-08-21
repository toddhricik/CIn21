// Listing 17.7 - Use strcmp() to compare two strings
#include <stdio.h>
#include <string.h>
int main(void){
	char str1[80], str2[80];
	int x;
	while(1){
		// Input two strings
		printf("\nInput the first string. Then a blank line.\n");
		scanf("%s", str1);
		if(strlen(str1)==0)
			break;
		printf("\nInput the second string.\n");
		scanf("%s", str2);
		// Compare the two strings and display the result
		x = strcmp(str1, str2);
		printf("\nstrcmp(\"%s\", \"%s\") returns %d\n", str1, str2, x);
	}
	return 0;
}
