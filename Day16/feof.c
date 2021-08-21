// Listing 16.7 - Using feor() to detect the end of file
#include <stdio.h>
#include <stdlib.h>
#define BUFSIZE 100
int main(void){
	char buf[BUFSIZE];
	char filename[60];
	FILE *fp;
	puts("Enter the name of a text file you would like to display: ");
	//fgets(filename, 60, stdin);
	scanf("%s", filename);
	// Open the file for reading.
	if((fp=fopen(filename, "r"))==NULL){
		fprintf(stderr, "Error opening the file.");
		exit(1);
	}
	// If end is not reached, read a line and display it
	while(!feof(fp)){
		fgets(buf, BUFSIZE, fp);
		printf("%s", buf);
	}
	fclose(fp);
	return 0;
}

