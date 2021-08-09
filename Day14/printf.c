/* Listing 14.13 - Demonstrates uses of printf() function. */
#include <stdio.h>
int main(void){
	printf("Declaring and instantiating char *m1 = \"Binary\"\n");
	char *m1 = "Binary";
	printf("Declaring and instantiating char *m2 = \"Decimal\"\n");
	char *m2 = "Decimal";
	printf("Declaring and instantiating char *m3 = \"Octal\"\n");
	char *m3 = "Octal";
	printf("Declaring and instantiating char *m4 = \"Hexadecimal\"\n");
	char *m4 = "Hexadecimal";
	
	printf("Declaring float d1 = 10000.123\n"); 
	float d1 = 10000.123;
	printf("Declaring int n, f\n");
	int n, f;
	printf("Outputting a number with different field widths.\n");
	printf("printf(\"%5f\n\", d1) gives\n");
	printf("%5f\n", d1);
	printf("printf(\"%10f\n\", d1) gives\n");
	printf("%10f\n", d1);
	printf("printf(\"%20f\n\", d1) gives\n");
	printf("%20f\n", d1);
	printf("printf(\"%25f\n\", d1) gives\n");
	printf("%25f\n", d1);

	printf("Press Enter to continue...");
	fflush(stdin);
	getchar();
	
	printf("\nUse the * field width specifier to obtain field width\n");
	printf("from a variable in the argument list.\n");
	printf("For example: for(n=5; n<25; n+=5) {printf(\"%*f\n\", n, d1);} results in the follwoing\n");
	for(n=5; n<25; n+=5)
		printf("%*f\n", n, d1);

	printf("Press Enter to continue...");
	fflush(stdin);
	getchar();

	printf("\nExamples of including leading zeros.\n");
	printf("printf(\"%05f\n\", d1) gives\n");
	printf("%05f\n", d1);
	printf("printf(\"%010f\n\", d1) gives\n");
	printf("%010f\n", d1);
	printf("printf(\"%020f\n\", d1) gives\n");
	printf("%020f\n", d1);
	printf("printf(\"%025f\n\", d1) gives\n");
	printf("%025f\n", d1);

	printf("Press Enter to continue...");
	fflush(stdin);
	getchar();

	printf("\nDisplay in octal, decimal, and hexadecimal.\n");
	printf("Use * to precede octal and hex output with 0 and 0X.\n");
	printf("Use - to left-justify each value in its field.\n");
	printf("First display column labels.\n");
	printf("Using printf(\"%-15s%-15s%-15s\", m2, m3, m4) gives\n");
	printf("%-15s%-15s%-15s", m2, m3, m4);
	
	printf("Using for(n=1; n<20; n++) { printf(\"\n%-15d%-#15o%-#15X\", n, n, n); } gives\n");
	for(n=1; n<20; n++)
		printf("\n%-15d%-i#15o%-#15X", n, n, n);

	printf("Press Enter to continue...");
	fflush(stdin);
	getchar();

	printf("\n\nUse the %n conversion command to count characters.\n");
	printf("printf(\"%s%s%s%s%n\", m1, m2, m3, m4, &n) gives\n");
	printf("%s%s%s%s%n", m1, m2, m3, m4, &n);
	printf("\n\nThe last printf() output %d characters.\n", n);
	return 0;
}
