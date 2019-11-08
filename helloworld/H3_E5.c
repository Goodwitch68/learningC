#include <stdio.h>
/* This function multiplicate two integers and returns the result */
int integer_mult(int x, int y) {
	return x * y;
}

int main() {
	printf("3 times 5 is %d.\n", integer_mult(3, 5));
	return 0;
}