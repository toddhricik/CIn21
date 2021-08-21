// Listing 17.1 - Demonstrates the use of strlen() function to determine the length of a string
#include <stdio.h>
#include <string.h>
int main(void){
	size_t length;
	char buf[8];
	while(1){
		puts("\nEnter a line of text, and a blank line to exit.");
		fflush(stdin);
		fgets(buf, 8, stdin);
		length = strlen(buf);
		if(length!=0)
			printf("\nThat line was %u characters long.", length);
		else
			break;
	}
	return 0;
}

