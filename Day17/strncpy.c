// Listing 17.3 - Use strncpy() to copy a string from one block of memory to another
#include <stdio.h>
#include <string.h>
int main(void){
	char dest[] =   "..........................";
	char source[] = "abcdefghijklmnopqrstuvwxyz";
	size_t n;
	while(1){
		puts("Enter the number of characters to copy (1-26) from the lowercase alphabet.");
		scanf("%lu", &n);
		if(n>=1 && n<=26)
			break;
	}
	printf("\nBefore strncpy(dest, source, %lu), dest holds the following string:\t%s\n", n, dest);
	strncpy(dest, source, n);
	printf("\nAfter strncpy(dest, source, %lu), dest holds the following string:\t%s\n", n, dest);
	return 0;
}
