/* Listing 15.7 - Inputs a list of strings from keyboard, sorts them,
 * and then displays them on the screen. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINES 25
int get_lines(char *lines[]);
void sort(char *p[], int n);
void print_strings(char *p[], int n);
int main(void){
	char *lines[MAXLINES];
	int number_of_lines;
	/* Read in the ines from the keyboard. */
	number_of_lines = get_lines(lines);
	if(number_of_lines < 0){
		puts("Memory allocation failure\n");
		exit(-1);
	}
	sort(lines, number_of_lines);
	print_strings(lines, number_of_lines);
	return 0;
}
int get_lines(char *lines[]){
	int n = 0;
	char buffer[80];										// Temporary storage for each line
	puts("Enter one line at a time. Enter a blank line when finished.");
	while((n<MAXLINES) && (strcmp(fgets(buffer, 80, stdin), "\n") != 0)){	// modified from book which uses gets()
		if((lines[n] = (char *)malloc(strlen(buffer)+1)) == NULL)
			return -1;
		strcpy(lines[n++], buffer);
	}
	return n;
}
void sort(char *p[], int n){
	int a, b;
	char *tmp;
	for(a=1; a<n; a++){
		for(b=0; b<n-1; b++){
			if(strcmp(p[b], p[b+1]) > 0){
				tmp = p[b];
				p[b] = p[b+1];
				p[b+1] = tmp;
			}
		}
	}
}
void print_strings(char *p[], int n){
	int count;
	for(count=0; count<n; count++)
		printf("%s\n", p[count]);
}

