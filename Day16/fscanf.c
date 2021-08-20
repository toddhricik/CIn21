// Listing 16.3 - Use fscnaf() to read formatted data from INPUT.TXT on disk
#include <stdio.h>
#include <stdlib.h>
int main(void){
	float f1, f2, f3, f4, f5;
	FILE *fp;
	if((fp=fopen("INPUT.TXT", "r"))==NULL){
		fprintf(stderr, "Error opening file.\n");
		exit(1);
	}
	fscanf(fp, "%f %f %f %f %f", &f1, &f2, &f3, &f4, &f5);
	printf("The values are %f, %f, %f, %f, and %f\n.", f1, f2, f3, f4, f5);
	fclose(fp);
	return 0;
}
