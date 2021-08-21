// Listing 16.4 - Direct file I/O with fwrite() and fread() */
#include <stdlib.h>
#include <stdio.h>
#define SIZE 20
int main(void){
	int count, array1[SIZE], array2[SIZE];
	FILE *fp;
	// Initialize arrays1[]
	for(count=0; count<SIZE; count++)
		array1[count] = 2 * count;
	// Open a binary mode file
	if((fp=fopen("direct.txt", "wb"))==NULL){
		fprintf(stderr, "Error opening file for writing.");
		exit(1);
	}
	// Save array1[] to the file. 
	if(fwrite(array1, sizeof(int), SIZE, fp)!=SIZE){
		fprintf(stderr, "Error writing to file.");
		exit(1);
	}
	fclose(fp);
	// Now open the same file for reading in binary mode
	if((fp=fopen("direct.txt", "rb"))==NULL){
		fprintf(stderr, "error opening file for reading.");
		exit(1);
	}
	// Read the data into array2[]
	if(fread(array2, sizeof(int), SIZE, fp)!=SIZE){
		fprintf(stderr, "Error reading file into array2.");
		exit(1);
	}
	fclose(fp);
	// Now display both arrays
	for(count=0; count<SIZE; count++)
		printf("array1[%d]: %d\tarray2[%d]: %d\n", count, array1[count], count, array2[count]);
	return 0;
}
