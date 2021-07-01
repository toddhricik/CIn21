/* Demonstrates unary operator prefix and ostfix maodes */

#include <stdio.h>

int a, b;

int main(void)
{
	/* Set a and b both qual to 5 */

	a = b = 5;

	/* Print them, devrementing each time. */
	/* Use prefix mode for b, postfix mode for a */

	printf("\nPost\tPre");
	printf("\n%d\t%d", a--, --b);
	printf("\n%d\t%d", a--, --b);
	printf("\n%d\t%d", a--, --b);
	printf("\n%d\t%d", a--, --b);
	printf("\n%d\t%d\n", a--, --b);

	return 0;
}
