// Listing 19.5 - Using q-sort and binary search implementations from stdlib.h
#include <stdlib.h>
#include <stdio.h>
#define MAX 20
int intcmp(const void *v1, const void *v2);
int main(void)
{
	int arr[MAX], count, key, *ptr;
	// Enter some integers from the user
	printf("Enter %d integer values; press Enter after each.\n", MAX);
	for(count=0; count<MAX; count++)
		scanf("%d", &arr[count]);
	puts("Press Enter to sort the values.\n");
	getc(stdin);
	// Sort the array in ascending order using quick sort
	qsort(arr, MAX, sizeof(arr[0]), intcmp);
	// Display the sorted array
	for(count=0; count<MAX; count++)
		printf("\narr[%d] = %d.", count, arr[count]);
	puts("\nPress Enter to continue.");
	getc(stdin);
	// Enter a key to search for in the array
	printf("Enter a value to search for: ");
	scanf("%d", &key);
	// Perform the search using binary search
	ptr = (int*)bsearch(&key, arr, MAX, sizeof(arr[0]), intcmp);
	if(ptr != NULL)
		printf("%d found at arr[%ld].", key, (ptr-arr));
	else
		printf("%d not found.", key);
	return 0;
}
int intcmp(const void *v1, const void *v2)
{
	return (*(int *)v1 - *(int *)v2);
}
