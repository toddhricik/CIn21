// Listing 17.6 - Use strncat() to concatenate string1 and string2 and return string1
#include <stdio.h>
#include <string.h>
int main(void){
	char str2[] = "abcdefghijklmnopqrstuvwxyz";
	char str1[27];
	int n;
	for(n=1; n<27; n++){
		strcpy(str1, "");
		strncat(str1, str2, n);
		puts(str1);
	}
	return 0;
}
