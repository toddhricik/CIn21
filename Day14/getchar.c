/* Listing 14.2 - Demonstrates the getchar() and putchar() functions. */
#include <stdio.h>
int main(void){
	int ch;
	while((ch=getchar()) != '\n')
		putchar(ch);
	return 0;
}
