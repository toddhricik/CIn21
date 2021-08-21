// Listing 16.10 - Copy a system file from one location to another
#include <stdlib.h>
#include <stdio.h>
int file_copy(char *oldname, char *newname);
int main(void){
	char source[80], destination[80];
	// Get the source and destination nemaes.
	printf("Enter the name of the source file you would like to copy: ");
	scanf("%s", source);
	printf("Enter the name of the destination file you would like to copy %s to: ", source);
	scanf("%s", destination);
	if(file_copy(source, destination)==0)
		printf("%s was copied to %s successfully.\n", source, destination);
	else
		fprintf(stderr, "Error during copy operation.\n");
	return 0;
}
int file_copy(char *oldname, char *newname){
	FILE *fold, *fnew;
	int c;
	// Open the source file for reading in binary mode
	if((fold=fopen(oldname, "rb"))==NULL)
		return -1;
	// Open the destination file for writing in binary mode
	if((fnew=fopen(newname, "wb"))==NULL){
		fclose(fold);
		return -1;
	}
	// Read source file one byte at a time while EOF has not been reached.
	// Write the byte to destination
	while(1){
		c = fgetc(fold);
		if(!feof(fold))
			fputc(c, fnew);
		else
			break;
	}
	fclose(fold);
	fclose(fnew);
}
