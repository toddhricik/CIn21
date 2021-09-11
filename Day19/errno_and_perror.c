// Listing 19.4 - Using errno and perror()
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void)
{
	FILE *fp;
	char filename[80];
	printf("Enter filename: ");
	scanf("%c", filename);
	if((fp = fopen(filename, "r")) == NULL)
	{
		perror("You goofed!");
		printf("errno = %d.\n", errno);
		exit(1);
	}
	else
	{
		puts("File opened for reading successfully.");
		fclose(fp);
	}
	return 0;
}
