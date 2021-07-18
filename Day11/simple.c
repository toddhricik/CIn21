/* Listing 11.1 - simple.c demonstrates the use of simple structures */
#include <stdio.h>
int length, width;
long area;

struct coord{							/* structure definition */
	int x;
	int y;
} myPoint;								/* declaration of a coord structure named myPoint at the end of definition */
int main(void){
	/* set values in the myPoint structure coordinates */
	myPoint.x = 12;
	myPoint.y = 14;
	printf("\nThe coordinates are: (%d, %d).\n", myPoint.x, myPoint.y);
	return 0;
}
