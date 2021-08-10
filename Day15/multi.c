/* Listing 15.1 - Demonstrates pointers and mulitdimensional arrays */
#include <stdio.h>
int main(void){
	int multi[2][4];
	printf("\nmulti = %u", multi);
	printf("\nmulti[0] = %u", multi[0]);
	printf("\n&multi[0][0] = %u\n", &multi[0][0]);
	return 0;
}
