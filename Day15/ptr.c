/* Listing 15.8 - Demonstrates declaring and using a pointer to a function */
#include <stdio.h>
double square(double x);
double (*ptr)(double x);
int main(void){
	printf("\ndouble square(double x) declared above main(void)...\n");
	printf("\ndoubel (*ptr)(double x) declared above main(void)...\n");
	printf("\nSetting ptr=square in main(void)...\n");
	ptr = square;
	printf("square(10.1)=%f\tptr(10.1)=%f\n", square(10.1), ptr(10.1));
	return 0;
}
double square(double x){
	return x*x;
}
	
