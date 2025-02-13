// Listing 16.2 - Use of fprintf()
#include <stdio.h>
#include <stdlib.h>
void clear_kb(void);
int main(void){
	FILE *fp;
	float data[5];
	int count;
	char filename[20];
	puts("Enter 5 floating-point numberical values separated by spaces.");
	for(count=0; count<5; count++)
		scanf("%f", &data[count]);
	/* Get the filename and open the file. First clear stdin. */
	/* of any extra characters. */
	clear_kb();
	puts("Enter a name for the file to which you want to write.");
	fgets(filename, 20, stdin);
	if((fp=fopen(filename, "w"))==NULL){
		fprintf(stderr, "Error opening file %s.", filename);
		exit(1);
	}
	/* Write the numberical data to the file and to stdout. */
	for(count=0; count<5; count++){
		fprintf(fp, "\ndata[%d] = %f", count, data[count]);
		fprintf(stdin, "\ndata[%d] = %f", count, data[count]);
	}
	fclose(fp);
	printf("\n");
	return 0;
}
void clear_kb(void){
	/* Clears stdin of any waiting characters */
	char junk[80];
	fgets(junk, 80, stdin);
}
