// Listing 18.4 - Return a pointer from a function
#include <stdio.h>
int larger1(int x, int y);									// returns an int
int *larger2(int *x, int *y);								// returns a pointer to an int
int main(void){
	int a, b, bigger1, *bigger2;
	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);
	bigger1 = larger1(a, b);
	printf("\n The larger value is %d.", bigger1);
	bigger2 = larger2(&a, &b);
	printf("\n The larger value is %d.", *bigger2);
	return 0;
}
int larger1(int x, int y){
	if(y>x)
		return y;
	return x;
}
int *larger2(int *x, int *y){
	if(*y>*x)
		return y;
	return x;
}
