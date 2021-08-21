// Listing 16.8 - using remove() function to delete a file from the system
#include <stdlib.h>
#include <stdio.h>
int main(void){
	char filename[80];
	printf("Enter a file you wish to permanently delete: ");
	scanf("%s", filename);
	if(remove(filename)==0)
		printf("The file %s has been deleted.\n", filename);
	else
		fprintf(stderr, "Error deleting the file %s\n", filename);
	return 0;
}
