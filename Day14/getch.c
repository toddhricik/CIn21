/* Listing 14.4 - Demonstrates the getch() function. */
/* Note: compiler must have access to conio.h */
#include <stdio.h>
#include <conio.h>
int main(void){
	int ch;
	while((ch=getch()) != '\r')
		putchar(ch);
	return 0;
}
