// Listing 16.5 - Demonstrates ftell() and rwwind()
#include <stdio.h>
#include <stdlib.h>
#define BUFLEN 6
int main(void){
	char msg[] = "abcdefghijklmnopqrstuvwxyz";
	FILE *fp;
	char buf[BUFLEN];
	printf("BUFLEN = 6\n");
	if((fp=fopen("TEXT.TXT", "w"))==NULL){
		fprintf(stderr, "Error opening file.\n");
		exit(1);
	}
	if(fputs(msg, fp)==EOF){
		fprintf(stderr, "Error writing to file.");
		exit(1);
	}
	fclose(fp);
	// Now open the file for reading
	if((fp=fopen("TEXT.TXT", "r"))==NULL){
		fprintf(stderr, "Error writing to the file.\n");
		exit(1);
	}
	printf("\nImmediately after opening, ftell(fp) shows we are at position = %ld", ftell(fp));
	// Read in 5 characters
	fgets(buf, BUFLEN, fp);
	printf("\nAfter reading in the buffer %s using fgets(buf, BUFLEN, fp), we are at postion = %ld", buf, ftell(fp));
	// Read in the next 5 characters
	fgets(buf, BUFLEN, fp);
	printf("\n\nThe next 5 characters are %s, and we are now at postion %ld", buf, ftell(fp));
	// Rewind the stream
	rewind(fp);
	printf("\nAfter using rewind(fp), we are now at position %ld", ftell(fp));
	fclose(fp);
	return 0;
}

