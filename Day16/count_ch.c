// Listing T&R 5 - count the characters in a file
#include <stdio.h>
#include <stdlib.h>
int file_exists(char *filename);
int main(void){
	char ch, source[80];
	int index;
	long count[127];
	FILE *fp;
	// Get the source and destination file names
	fprintf(stderr, "\nEnter the source file name: ");
	scanf("%s", source);
	// See if the source file exists
	if(!file_exists(source)){
		fprintf(stderr, "\nThe file %s does not exist.\n", source);
		exit(1);
	}
	// Open the file
	if((fp=fopen(source, "rb"))==NULL){
		fprintf(stderr, "\nError opening the file %s.\n", source);
		exit(1);
	}
	// Zero out the array elements
	for(index=32; index<=126; index++)
		count[index] = 0;
	while(1){
		ch = fgetc(fp);
		// Done if at the end of file
		if(feof(fp))
			break;
		// Count only characters whose ascii values are between 32 and 126
		if(ch>=32 && ch<=126)
			count[ch]++;

	}
	// Display the results
	printf("\nChar\t\tCount\n");
	for(index=32; index<=126; index++)
		printf("[%c]\t\t%ld\n", index, count[index]);
	// Close file and exit
	fclose(fp);
	return 0;
}
int file_exists(char *filename){
	// Returns true if filename exists and false if not
	FILE *fp;
	if((fp=fopen(filename, "r"))==NULL)
		return 0;
	else{
		fclose(fp);
		return 1;
	}
}
