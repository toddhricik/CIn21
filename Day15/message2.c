/* Listing 15.6 - Demonstrates passing an array of pointers to a function */
#include <stdio.h>
void print_strings(char *p[], int n);
int main(void){
	char *message[8] = { "Four", "score", "and", "seven", "years", "ago", "our", "fathers" };
	print_strings(message, 8);
	return 0;
}
void print_strings(char *p[], int n){
	int count;
	for(count=0; count<n; count++)
		printf("%s ", p[count]);
	printf("\n");
}
