// Listing 17.16  - Using the isxxxx() macros to implement a function that inputs an iteger
#include <stdio.h>
#include <ctype.h>
int get_int(void);
int main(void){
	int x;
	x = get_int();
	printf("You have entered %d.\n", x);
	return 0;
}
int get_int(void){
	int ch, i, sign = 1;
	// Skip over leading white space
	while(isspace(ch=getchar()))
		;
	// If the first character is non-numeric, unget the character and return 0
	if(ch!='.' && ch!='+' && !isdigit(ch) && ch!=EOF){
		ungetc(ch, stdin);
		return 0;
	}
	// If the first character is a minus sign, set the sign accordingly
	if(ch=='-')
		sign = -1;
	// If the first character was a plus or minus sign, get the next character
	if(ch=='+' || ch=='-')
		ch = getchar();
	// Read characters untill a nondigit is input. 
	// Assign values, multiplied by proper power of 10, to i
	for(i=0; isdigit(ch); ch=getchar())
		i = 10 * i + (ch - '0');
	// Make sure negative if sign is negative
	i *= sign;
	// If EOF was not encountered, a non-digit character must have been read in, so unget it
	if(ch!=EOF)
		ungetc(ch, stdin);
	// Return in the input value
	return i;
}
