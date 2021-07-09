/* Passing an array to a function. Alternative way. */

#include <stdio.h>

#define MAX 10

int array[MAX+1], count;

int largest(int num_array[]);

int main(void)
{
	/* Input MAX values from the keyboard. */

	for(count=0; count<MAX; count++){
		printf("Enter an integer value: ");
		scanf("%d", &array[count]);
		
		if(array[count]==0)
			count = MAX;
	}
	array[MAX] = 0;

	/* Call the function and display the return value. */
	printf("\n\nLargest value = %d\n", largest(array));

	return 0;
}

int largest(int num_array[])
{
	int count, biggest = -12000;

	for(count=0; num_array[count] != 0; count++){
		if(num_array[count] > biggest)
			biggest = num_array[count];
	}
	
	return biggest;
}

