/* Listing 15.9 - Demonstrates using a pointer to call different functions. */
#include <stdio.h>
#include <stdbool.h>
void func1(int x);
void one(void);
void two(void);
void other(void);
int main(void){
	printf("void func1(int x) declared above main(void)...\n");
	printf("void one(void) declared above main(void)...\n");
	printf("void two(void) declared above main(void)\n");
	printf("void other(void) declared above main(void)\n");
	printf("\nDeclaring int nbr...\n");	
	int nbr;
	while(1){
		puts("\nEnter an integer to chose a function to run:");
		printf("(1)Run one()\n(2)Run two()\n(3)Run other()\n(0)Quit\n");
		scanf("%d", &nbr);
		if(nbr==0){
			printf("\n0 was entered. Exiting program...\n");
			break;
		}
		if(nbr<0 || nbr>3){
			printf("\nInvalid entry. Please enter a number between 0 and 3\n");
			continue;
		}
		printf("\nYou entered %d.\n", nbr);
		printf("Calling func1(%d)...\n", nbr);
		func1(nbr);
		
	}
	return 0;
}
void func1(int x){
	/* Create a pointer to a function having signature void <funcname>(void) */
	printf("\nIn func1(%d)\n", x);
	printf("\n Declaring a pointer to a function having signature void <funcname>(void)...\n");
	printf("\n Declaring void (*ptr)(void)...\n");	
	void (*ptr)(void);
		switch(x){
			case 1:		printf("\n1 was entered. setting ptr=one;\n");
						ptr=one;
						break;
			case 2:		
						printf("\n2 was entered. setting ptr=two\n");
						ptr=two;
						break;
			case 3:
						printf("\n3 was entered. setting ptr=other;\n");
						ptr = other;
						break;
		}
		printf("\nCalling ptr()...\n");
		ptr();
}
void one(void){
	puts("You ran one(void)...");
}
void two(void){
	puts("You ran two(void)...");
}
void other(void){
	puts("You ran other(void)...");
}
