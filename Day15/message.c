/* Listing 15.5 - Demonstrates how to initialize an array of pointers to type char */
#include <stdio.h>
int main(void){
	char *message[8] = { "Four", "score", "and", "seven", "years", "ago", "our", "fathers" };
	int count;
	for(count=0; count<8; count++)
		printf("%s ", message[count]);
	printf("\n");
	return 0;
}
