/* Listing 14.5 - Demonstrates how to use getch() to input strings */
/* Note: compiler must have access to conio.h */
#include <stdio.h>
#include <conio.h>
#define MAX 80
int main(void){
	char ch, buffer[MAX+1];
	int x = 0;
	while((ch=getch()) != '\n' && x < MAX)
		buffer[x++] = ch;
	buffer[x] = '\0';
	printf("%s\n", buffer);
	return 0;
}

