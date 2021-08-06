/* Listing 13.3 - Demonstrates the goto statement */
#include <stdio.h>
int main(void){
	int n;
start:
	puts("Enter a number between 0 and 10: ");
	scanf("%d", &n);
	if(n < 0 || n > 10)
		goto start;
	else if(n == 0)
		goto location0;
	else if(n == 1)
		goto location1;
	else
		goto location2;
location0:
	puts("\nYou entered 0.\n");
	goto end;
location1:
	puts("\nYou entered 1.\n");
	goto end;
location2:
	puts("\nYou entered something between 2 and 10.\n");
	goto end;
end:
	return 0;
}
