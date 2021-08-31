// Listing 20.5 - Using malloc() and free()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BLOCKSIZE 3000000
int main(void)
{
	void *ptr1, *ptr2;
	// Allocate one block.
	ptr1 = malloc(BLOCKSIZE);
	if(ptr1 != NULL)
		printf("\nFirst allocation of %d bytes successful.", BLOCKSIZE);
	else
	{
		printf("\nFirst allocation attempt of %d bytes failed.", BLOCKSIZE);
		exit(1);
	}
	// Try to allocate another block.
	ptr2 = malloc(BLOCKSIZE);
	if(ptr2 != NULL)
	{
		printf("\nSecond allocation of %d bytes successful.", BLOCKSIZE);
		exit(0);
	}
	printf("\nSecond allocation of %d bytes failed.", BLOCKSIZE);
	printf("\nFreeing first allocation to make room.");
	free(ptr1);
	ptr1 = 0;
	ptr2 = malloc(BLOCKSIZE);
	if(ptr2 != NULL)
		printf("\nAfter using free() on first allocation, %d bytes successfully allocated for second BLOCK.", BLOCKSIZE);
	return 0;
}
