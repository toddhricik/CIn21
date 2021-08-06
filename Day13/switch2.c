/* Listing 13.6 - Demonstrates the switch statement */
#include <stdio.h>
int main(void){
	int reply;
	puts("\nEnter a number between 1 and 5: ");
	scanf("%d", &reply);
	switch(reply){
		case 0:
			break;
		case 1:
			puts("\nYou entered 1.");
			break;
		case 2:
			puts("\nYou entered 2.");
			break;
		case 3:
			puts("\nYou entered 3.");
			break;
		case 4:
			puts("\nYou entered 4.");
			break;
		case 5:
			puts("\nYou entered 5.");
			break;
		default:
			puts("\nOut of range, try again.");
			break;
	}
	return 0;
}
