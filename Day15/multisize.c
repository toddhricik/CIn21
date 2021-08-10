/* Listing 15.2 - Demonstrates how to compute the sizes of multidimensional array */
#include <stdio.h>
int main(void){
	int multi[2][4];
	printf("\nTHe size of multi = %u\n", sizeof(multi));
	printf("\nTHe size of multi[0] = %u\n", sizeof(multi[0]));
	printf("\nTHe size of multi[0][0] = %u\n", sizeof(multi[0][0]));
	return 0;
}
