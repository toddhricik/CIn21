/* Listing 13.4 - Demonstrates using an infinite loop to implement
 * a menu system */
#include <stdio.h>
#define DELAY 150000

int menu(void);
void delay(void);
int main(void){
	int choice;
	while(1){
		/* Get the user's selection */
		choice = menu();
		/* Branch based on the input. */
		if(choice == 1){
			puts("\nExecuting task A.\n");
			delay();
		}
		else if(choice == 2){
			puts("\nExecuting task B.\n");
			delay();
		}
		else if(choice == 3){
			puts("\nExecuting task C.\n");
			delay();
		}
		else if(choice == 4){
			puts("\nExecuting task D.\n");
			delay();
		}
		else if(choice == 5){
			puts("\nExiting program now...\n");
			delay();
			break;
		}
		else{
			puts("\nInvalid choice, try again...\n");
			delay();
		}
	}
	return 0;
}
int menu(void){
	int reply;
	puts("\nEnter 1 for task A");
	puts("\nEnter 2 for task B");
	puts("\nEnter 3 for task C");
	puts("\nEnter 4 for task D");
	puts("\nEnter 5 to exit program");
	scanf("%d", &reply);
	return reply;
}
void delay(void){
	for(long x=0; x<DELAY; x++)
		;
}
