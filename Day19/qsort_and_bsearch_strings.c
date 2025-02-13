// Listing 19.6 - Using quick sort and binary search on strings
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 20
int comp(const void *s1, const void *s2);
int main(void)
{
	char *data[MAX], buf[80], *ptr, *key, **key1;
	int count;
	// Input a list of words.
	printf("Enter %d words, pressing Enter after each word.\n", MAX);
	for(count=0; count<MAX; count++)
	{
		printf("Word %d: ", count+1);
		scanf("%s", buf);
		data[count] = malloc(strlen(buf)+1);
		strcpy(data[count], buf);
	}
	// Sort the words (actually sort the pointers).
	qsort(data, MAX, sizeof(data[0]), comp);
	// Display the sorted words
	for(count=0; count<MAX; count++)
		printf("\n%d: %s", count+1, data[count]);
	// Get a key to search for from user.
	printf("\n\nEnter a search key: ");
	scanf("%s", buf);
	// Perform the search. First make key1 a pointer to the pointer to the search key
	key = buf;
	key1 = &key;
	ptr = bsearch(key1, data, MAX, sizeof(data[0]), comp);
	if(ptr != NULL)
		printf("%s found.\n", buf);
	else
		printf("%s not found.\n", buf);
	return 0;
}
int comp(const void *s1, const void *s2)
{
	return (strcmp(*(char **)s1, *(char **)s2));
}
