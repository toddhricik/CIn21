/* Demonstrates the relationship between addresses and */
/* elements of arrays of differetn data types. */

#include <stdio.h>

/* Declare a counter and three arrays. */
int ctr;
short array_s[10];
float array_f[10];
double array_d[10];

int main(void)
{
	/* Print the table heading */

	printf("\t\tShort\t\t\tFloat\t\t\tDouble");

	printf("\n================================");
	printf("=======================");
	printf("=======================");

	/* print the addresses of each array elemetn. */

	for(ctr=0; ctr<10; ctr++)
		printf("\nElement %d:\t%ld\t\t%ld\t\t%ld", ctr, &array_s[ctr], &array_f[ctr], &array_d[ctr]);
	printf("\n================================");
	printf("========================");
	printf("========================\n");

	return 0;
}
