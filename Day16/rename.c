// Listing 16.9 - Use rename() to rename a system file to a new name on the same hard disk
#include <stdlib.h>
#include <stdio.h>
int main(void){
	char oldname[80], newname[80];
	printf("Enter a file name that you wish to rename: ");
	scanf("%s", oldname);
	printf("Enter the new name you would like to give to %s: ", oldname);
	scanf("%s", newname);
	if(rename(oldname, newname)==0)
		printf("%s has been renamed to %s.\n", oldname, newname);
	else
		fprintf(stderr, "Error occurred while trying to rename %s.\n", oldname);
	return 0;
}
