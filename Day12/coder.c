/* Listing T&R 4 - Code and decode a message
 * Usage:	Coder [filename] [action]
 * where filename = filename having with data to be endocoded or decoded
 * where action = D for decode and C to encode data */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int encode_character(int ch, int val);
int decode_character(int ch, int val);

int main(int argc, char *argv[]){
	FILE *fh;															/* a file handle */
	int rv = 1;															/* a return value */
	int ch = 0;															/* variable to hold a character */
	unsigned int ctr = 0;												/* a counter variable */
	int val = 5;														/* value to code with */
	char buffer[257];													/* buffer */

	if(argc != 3){
		printf("\nError: Wrong number of parameters...");
		printf("\n\nUsage:\n%s filename action", argv[0]);
		printf("\n\nWhere:");
		printf("\nfilename = name of file to code or decode");
		printf("\naction = D for decode or C for encode\n\n");
		rv = -1;
	}
	else
	if((argv[2][0] == 'D') || (argv[2][0] == 'd')){
		fh = fopen(argv[1], "r");										/* open a file to read */
		if(fh <= 0){													/* make sure a file opened */
			printf("\n\nError opening file...\n");
			rv = -2;
		}
		else{
			ch = getc(fh);												/* get a character from file handle fh */
			while(!feof(fh)){											/* check for end of file */
				ch = decode_character(ch, val);
				putchar(ch);											/* write character to screen */
				//printf("%c", ch);
				ch = getc(fh);											/* get next character from file handle */
			}
			fclose(fh);
			printf("\n\nFile has been decoded to screen...\n");
		}
	}
	else{																/* assume you are coding to file */
		fh = fopen(argv[1], "w");										/* open a file to write */
		if(fh <= 0){
			printf("\n\nError creating file...\n");
			rv = -3;
		}
		else{
			printf("\n\nEnter text to be encoded...\n");
			printf("Enter a blanck line to end.\n\n");
			fgets(buffer, 257, stdin);
			printf("\nBuffer: %s\n ", buffer);
			for(ctr=0; ctr<strlen(buffer); ctr++){
				if(ctr == 0 && buffer[0] == NULL)
					break;
				ch = encode_character(buffer[ctr], val);
				ch = fputc(ch, fh);									/* write encoded character to file */
			}
			printf("\n\nFile encoded to file.\n");
			fclose(fh);
		}
	}
	return (rv);
}
int encode_character(int ch, int val){
	ch = ch + val;
	return (ch);
}
int decode_character(int ch, int val){
	ch = ch - val;
	return (ch);
}


