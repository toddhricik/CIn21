/* Listing 13.7 - Demonstates using an infinite loop and the swithch
 * statement to implement a menu system */
#include <stdio.h>
//#include <stdlib.h>
#define DELAY 150000
int menu(void);
void delay(void);
int main(void){
	int command = 0;
	command = menu();
	while(command != 5){
		/* Get user's selection and branch based upon the input */
		switch(command){
			case 1:{
				puts("\nExecuting task A.");
				delay();
				break;
			}
			case 2:{
				puts("\nExecuting task B.");
				delay();
				break;
			}
			case 3:{
				puts("\nExecuting task C.");
				delay();
				break;
			}
			case 4:{
				puts("\nExecuting task D.");
				delay();
				break;
			}
			case 5:{
				puts("\nExiting the progam now...\n");
				delay();
				break;
			}
			default:{
				puts("\nInvalid entry, please try again.");
				delay();
				break;
			}
		}
		command = menu();
	}
	return 0;
}
int menu(void){
	int reply;
	puts("\nEnter 1 for task A.");
	puts("\nEnter 2 for task B.");
	puts("\nEnter 3 for task C.");
	puts("\nEnter 4 for task D.");
	puts("\nEnter 5 to exit program.");
	scanf("%d", &reply);
	return reply;
}
void delay(){
	long x;
	for(x=0; x<DELAY; x++)
		;
}
