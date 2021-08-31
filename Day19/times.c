// Listing 19.2 - Using C libary time functions
#include <stdio.h>
#include <time.h>
int main(void)
{
	time_t start, finish, now;
	struct tm *ptr;
	char *c, buf1[80];
	double duration;
	// Record the time the program starts execution
	start = time(0);
	// Record the current time, using the alternate method of calling time()
	time(&now);
	// Convert the time_t valuse into a type tm structure.
	ptr = localtime(&now);
	// Create and display a formatted string containing the current time.
	c = asctime(ptr);
	puts(c);
	getc(stdin);
	// Now use the strftime() function to create several different formatted versions of the time.
	strftime(buf1, 80, "This is week %U of the year %Y", ptr);
	puts(buf1);
	getc(stdin);
	strftime(buf1, 80, "Today is %A, %x", ptr);
	puts(buf1);
	getc(stdin);
	strftime(buf1, 80, "It is %M minutes past hour %I.", ptr);
	puts(buf1);
	getc(stdin);
	// Now get the current time and calculate the program duration.
	finish = time(0);
	duration = difftime(finish, start);
	printf("\nProgram execution time using tim() = %f seconds.", duration);
	// Also display program duation in the hundredths of seconds using clock()
	printf("\nProgram execution time using clock() = %ld hundredths of a second.", clock());
	return 0;
}
