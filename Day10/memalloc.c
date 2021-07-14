/* Demonstrates the use of malloc() to allocate storage */
/* space for string data. */

#include <stdio.h>
#include <stdlib.h>

char count, *ptr, *p;

int main(void){
	/* Allocate a block of 35 bytes. Test for success. */
	/* The exit() library function terminates the program. */
	
	ptr = malloc(35 * sizeof(char));

	if(ptr == NULL){
		puts("Memory allocation error.\n");
		return 1;
	}

	/* Fill the string with values 65 through 90, */
	/* which are the ASCII codes for A-Z. */

	/* p is a pointer used to step through the string. */
	/* You want ptr to remain pointed to the start of the string. */

	p = ptr;

	for(count=65; count<91; count++)
		*p++ = count;
	
	/* Add the terminating NULL character. */
	*p = '\0';

	/* Display the string on screen. */
	puts(ptr);
	free(ptr);
	return 0;
}
