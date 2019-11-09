//2. Write a program that allocates a block of memory space to hold 100 items of the
//float data type by calling the calloc() function. Then, reallocate the block of
//memory in order to hold 50 more items of the float data type.


#include <stdio.h>
#include <stdlib.h>

main() {
	float *ptr_x;
	int result;
	ptr_x = calloc(100, sizeof(float));
	if (ptr_x != NULL) {
		result = 0;
		printf("First allocation is done\n");
	}
	else {
		printf("The first allocation wasn't successful! \n");
		result = 1;
	}
	ptr_x = realloc (ptr_x, 150);
	if (ptr_x != NULL) {
		result = 0;
		printf("The reallocation is done\n");
	}
	else {
		printf("The reallocation wasn't successful! \n");
		result = 1;
	}
	return result;
}