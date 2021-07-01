/* Demonstrates teh use of if statements */

#include <stdio.h>

int x, y;

int main(void)
{
	/* Input the two values to be tested */

	printf("\nInput an integer value for x: ");
	scanf("%u", &x);
	printf("\nInput an integer value for y: ");
	scanf("%u", &y);

	/* Test values and print result */

	if(x == y)
		printf("x is equal to y\n");

	if(x > y)
		printf("x is greater than y\n");

	if(x < y)
		printf("x is less than y\n");

	return 0;
}
