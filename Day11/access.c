/* Deomonstrates stepping therough an array of sstructures */
/* using pointer notation. */

#include <stdio.h>

#define MAX 4

/* Define a structure, tehn declare and intialize */
/* an array of 4 structures. */

struct part {
	short number;
	char name[10];
} data[MAX] = {1, "Smith",
				2, "Jones",
				3, "Adams",
				4, "Wilson"
				};

/* Declare a pointer to type part, and a counter variable. */
struct part *p_part;
int count;

int main(void){
	/* Initialize the pointer to the first array element. */

	p_part = data;
	
	/* Loop through the array, incrementing the pointer */
	/* with each iteration. */

	for(count=0; count<MAX; count++){
		printf("At address %d: %d %s\n", p_part, p_part->number, p_part->name);
		p_part++;
	}
	return 0;
}
