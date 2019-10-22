#include <stdio.h>
/* This function multiplicate two integers and returns the result */
int integer_mult( int x, int y )
{
	int result;
	result = x * y;
	return result;
}
int main()
{
	int prod;
	prod = integer_mult(3, 5);
	printf("3 times 5 is %d.\n", prod);
	return 0;
}