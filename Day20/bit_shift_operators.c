// Listing 20.7 - Demonstrate right/left bit shifting as a way to multiply/divide by powers of 2
#include <stdio.h>
int main(void)
{
	unsigned int y, x = 255;
	int count;
	printf("Decimal\t\tshift left by\tresult\n");
	for(count=1; count<8; count++)
	{
		y = x << count;
		printf("%d\t\t%d\t\t%d\n", x, count, y);
	}
	printf("\n\nDecimal\t\tshift right by\tresult\n");
	for(count=1; count<8; count++)
	{
		y = x >> count;
		printf("%d\t\t%d\t\t%d\n", x, count, y);
	}
	return 0;
}
