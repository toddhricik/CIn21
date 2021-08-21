// Listing 17.2 - Copy a string from one block of memory to another using strcpy()
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(void){
	char source[] = "The source string.";
	char dest1[80];
	char *dest2, *dest3;
	printf("\nsource string: %s\n", source);
	// Copying source to dest1 is ok because dest1 points to 80 bytes of allocated space
	strcpy(dest1, source);
	printf("\ndest1: %s\n", dest1);
	// To copy source to dest2 requires that you allocate space
	dest2 = (char*)malloc(strlen(source)+1);
	strcpy(dest2, source);
	printf("\ndest2: %s\n", dest2);
	// Copying directly to dest3 is a no no because we don't know what data is being held at dest3 address
	// strcpy(dest3, source)
	return 0;
}
