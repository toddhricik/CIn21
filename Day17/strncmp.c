// Listing 17.8 - Use strncmp() to do a partial cmparison between string1 and string2
#include <stdio.h>
#include <string.h>
int main(void){
	char str1[] = "The first string.";
	char str2[] = "The second string.";
	size_t n, x;
	puts(str1);
	puts(str2);
	while(1){
		puts("\n\nEnter the number of characters to compare in string1 and string2, or enter 0 to exit.");
		scanf("%lu", &n);
		if(n<=0)
			break;
		x = strncmp(str1, str2, n);
		printf("\nComparing %lu charcters in string1 and string2, strncmp() returns %lu.\n", n, x);
	}
	return 0;
}
