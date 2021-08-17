/* Listing 16.1 - Demonstrates file streams to disk files using fopen() */
#include <stdio.h>
#include <stdlib.h>
int main(void){
	FILE *fp;
	char ch, filename[40], mode[4];
	while(1){
		/* Input filename and mode */
		printf("\nEnter a filename: ");
		//fgets(filename, 39, stdin);
		scanf("%s", filename);
		while(getchar()!='\n') {;}
		printf("\nENter a mode (max 3 characters): ");
		//fgets(mode, 3, stdin);
		scanf("%s", mode);
		while(getchar()!='\n') {;}
		/* Try to open the file */
		if((fp=fopen(filename, mode)) != NULL){
			printf("\nSuccessful opeing %s in mode %s.\n", filename, mode);
			fclose(fp);
			puts("Enter x to exit, any other to continue.");
			if((ch=getc(stdin))=='x')
				break;
			else
				continue;
		}
		else{
			fprintf(stderr, "\nError opening file %s in mode %s.\n", filename, mode);
			puts("Enter x to exit, any other to try again.");
			if((ch=getc(stdin))=='x')
				break;
			else
				continue;
		}
	}
	return 0;
}
