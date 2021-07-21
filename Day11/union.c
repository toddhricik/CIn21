/* Demonstrates incorrect usgae of a union by using more than one union member at a time */
#include <stdio.h>
int main(void){
	union hsared_tag {
		char c;
		int i;
		long l;
		float f;
		double d;
	} shared;

	shared.c = '$';

	printf("\nchar\tc=%c", shared.c);
	printf("\nint\ti=%d", shared.i);
	printf("\nlong\tl=%ld", shared.l);
	printf("\nfloat\tf=%f", shared.f);
	printf("\ndouble\td=%lf\n", shared.d);

	shared.d = 123456789.8765;

    printf("\nchar\tc=%c", shared.c);
    printf("\nint\ti=%d", shared.i);
    printf("\nlong\tl=%ld", shared.l);
    printf("\nfloat\tf=%f", shared.f);
    printf("\ndouble\td=%lf\n", shared.d);

	return 0;
}
