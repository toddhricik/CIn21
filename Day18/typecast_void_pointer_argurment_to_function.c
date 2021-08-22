// Listing 18.2 - Pass a void pointer to a function and typecast it within the function bode
#include <stdio.h>
void half(void *pval, char type);
int main(void){
	// Initialize one variable of each type
	int i = 20;
	long l = 100000;
	float f = 12.456;
	double d = 123.0444444;
	// Display the variables' values
	printf("\n%d", i);
	printf("\n%ld", l);
	printf("\n%f", f);
	printf("\n%lf", d);
	// Call half() on each variable
	half(&i, 'i');
	half(&l, 'l');
	half(&f, 'f');
	half(&d, 'd');
	// Display the new values for each variable
	printf("\n%d", i);
	printf("\n%ld", l);
	printf("\n%f", f);
	printf("\n%lf", d);
	return 0;
}
void half(void *pval, char type){
	// Depending on the value in the type argument, cast the pointer pval appropriately and divide by 2
	switch(type){
		case 'i':
						*((int *)pval) /= 2;
						break;
		case 'l':
						*((long *)pval) /= 2;
						break;
		case 'f':
						*((float *)pval) /= 2;
						break;
		case 'd':
						*((double *)pval) /= 2;
						break;
	}
}
