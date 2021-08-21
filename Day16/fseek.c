// Listing 16.6 - Random access with fseek()
#include <stdlib.h>
#include <stdio.h>
#define MAX 50
int main(void){
	FILE *fp;
	int data, count, array[MAX];
	long offset;
	printf("MAX = 50.\n");
	// Initialize the array
	for(count=0; count<MAX; count++)
		array[count] = count * 10;
	// Open a binary file for writing
	if((fp=fopen("RANDOM.DAT", "wb"))==NULL){
		fprintf(stderr, "Error opening file for write.\n");
		exit(1);
	}
	// Write the array to file
	if((fwrite(array, sizeof(int), MAX, fp))!=MAX){
		fprintf(stderr, "\nError writing data to file.\n");
		exit(1);
	}
	fclose(fp);
	// Open the file for reading
	if((fp=fopen("RANDOM.DAT", "rb"))==NULL){
		fprintf(stderr, "Error opening file for read.\n");
		exit(1);
	}
	// Ask user which element of file to read. Input the element
	// and display it, quitting when -1 is entered
	while(1){
		printf("\nEnter element to read, 0-%d, -1 to quit: ", MAX-1);
		scanf("%ld", &offset);
		if(offset<0)
			break;
		else if(offset>MAX-1)
			continue;
		// Move the position indicator to the specified element
		if((fseek(fp, (offset*sizeof(int)), SEEK_SET))!=0){
			fprintf(stderr, "\nError using fseek(fp, (offset*sizeof(in)), SEEK_SET))\n");
			exit(1);
		}
		// Read in a single integer.
		fread(&data, sizeof(int), 1, fp);
		printf("\nElement %ld has value %d.", offset, data);
	}
	fclose(fp);
	return 0;
}
