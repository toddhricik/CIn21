/* Listing 15.11 - Imports a list of strings from the keyboard, sort them
 * in ascending or descending order, and then displays them on screen */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAXLINES 25
int get_lines(char* lines[]);
void sort(char *p[], int n, int sort_type);
void print_strings(char *p[], int n);
int alpha(char *p1, char *p2);
int reverse(char *p1, char *p2);
int main(void){
	char *lines[MAXLINES];
	int number_of_lines, sort_order_type;
	/* Read in lines from the keyboard */
	number_of_lines = get_lines(lines);
	if(number_of_lines < 0){
		puts("Memory allocation error;");
		exit(-1);
	}
	puts("Enter (0) for reverse sort order, (1) for alphabetical sort order: ");
	scanf("%d", &sort_order_type);
	sort(lines, number_of_lines, sort_order_type);
	print_strings(lines, number_of_lines);
	return 0;
}
int get_lines(char *lines[]){
	int n = 0;
	char buffer[80];
	puts("Enter one line at a time. Enter a blank line when done.");
	while((n<MAXLINES) && (strcmp(fgets(buffer, 80, stdin), "\n") != 0) && (buffer[0] != '\0')){
		if((lines[n] = (char *)malloc(strlen(buffer)+1)) == NULL)
			return -1;
		strcpy(lines[n++], buffer);
	}
	return n;
}
void sort(char *p[], int n, int sort_order_type){
	int a, b;
	char *tmp;
	/* Create a function pointer */
	int (* compare)(char *s1, char *s2);
	/* Initialize the pointer to point to the propper comparison function */
	compare = (sort_order_type) ? reverse : alpha;
	for(a=1; a<n; a++){
		for(b=0; b<b-1; b++){
			if(compare(p[b], p[b+1]) > 0){
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
int alpha(char *p1, char *p2){
	return strcmp(p2, p1);
}
int reverse(char *p1, char *p2){
	return strcmp(p1, p2);
}
