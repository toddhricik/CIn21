// Listing 20.4 - Using realloc() to reallocate memory
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char buf[80], *message;
	// Input a string
	puts("Enter a line of text.");
	fgets(buf, 80, stdin);
	// Allocate the intial block and copy the string to it
	message = realloc(NULL, strlen(buf)+1);
	strcpy(message, buf);
	// Display the text
	puts(message);
	// Get another string from the user
	puts("Enter another line of text.");
	fgets(buf, 80, stdin);
	// Increase the allocation, then concatenate the string to it.
	message = realloc(message, (strlen(message) + strlen(buf)+1));
	strcat(message, buf);
	// Display the new concatenated text.
	puts(message);
	return 0;
}
