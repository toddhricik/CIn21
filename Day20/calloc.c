// Listing 20.3 Use calloc() to allocate memory storage space dynamically
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	unsigned long num;
	int *ptr;
	printf("Enter the number of type int to allocate: ");
	scanf("%ld", &num);
	ptr = (int*)calloc(num, sizeof(long long));
	if(ptr != NULL)
		puts("Memory allocation using calloc() was successful.");
	else
		puts("Memaroy allocation using calloc() failed.");
	return 0;
}
