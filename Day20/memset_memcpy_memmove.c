// Listing 20.6 - Using memset(), memcpy() and memmove()
#include <stdio.h>
#include <string.h>
char message1[60] = "Four score and seven years ago...";
char message2[60] = "abcdefghijklmnopqrstuvwxyz";
char temp[60];
int main(void)
{
	printf("\nmessage1[] before memset(message1 + 5, '@', 10):\t\t%s", message1);
	memset(message1 + 5, '@', 10);
	printf("\nmessage1[] after memset(message1 + 5, '@', 10):\t\t%s", message1);
	strcpy(temp, message2);

	printf("\n\nOriginal message2[] in temp[] before memcpy(temp + 4, temp + 16, 10), which has no overlap.:\t%s", temp);
	memcpy(temp + 4, temp + 16, 10);
	printf("\n\nAfter memcpy(temp + 4, temp + 16, 10) which has no overlap, temp[] now contains:\t%s", temp);
	printf("\n\nReseting temp[] to original message2[]...\n");
	strcpy(temp , message2);
	printf("\n\nOriginal message2[] in temp[] beform memcpy(temp + 6, temp + 4, 10), which does have an overlap:\t%s", temp);
	memcpy(temp + 6, temp + 4, 10);
	printf("\n\nAfter memcpy(temp + 6, temp + 4, 10), which has an overlap, temp[] now contains:\t%s", temp);
	
	printf("\n\nReseting temp[] to original message2[]...\n");
	strcpy(temp , message2);
	printf("\n\nOriginal message2[] in temp[] before memmmove(temp + 4, temp + 16, 10), which has no overlap.:\t%s", temp);
	memmove(temp + 4, temp + 16, 10);
	printf("\n\nAfter memmove(temp + 4, temp + 16, 10) which has no overlap, temp[] now contains:\t%s", temp);
	printf("\n\nReseting temp[] to original message2[]...\n");
	strcpy(temp , message2);
	printf("\n\nOriginal message2[] in temp[] beform memmove(temp + 6, temp + 4, 10), which does have an overlap:\t%s", temp);
	memmove(temp + 6, temp + 4, 10);
	printf("\n\nAfter memmove(temp + 6, temp + 4, 10), which has an overlap, temp[] now contains:\t%s\n", temp);
	return 0;
}
