
//3. Write a program to ask the user to enter the total number of float data. Then use
//the calloc() and malloc() functions to allocate two memory blocks with the
//same size specified by the number, and print out the initial values of the two memory blocks.

#include <stdio.h>
#include <stdlib.h>

main() {
	int Nodata;
	float *ptr_x1;
	float *ptr_x2;
	int result;
	setbuf(stdout, NULL);
	printf("Enter the total number of float data you want to allocate:");
	scanf("%d", &Nodata);
	ptr_x1 = malloc (Nodata * sizeof(float));
	if (ptr_x1 != NULL){
		result = 0;
		printf("First allocation is done\n, the first value of the block is: %f\n", *ptr_x1);
	}
	else {
		printf("The first allocation wasn't successful! \n");
		result = 1;
	}
	ptr_x2 = calloc (Nodata, sizeof(float));
	if (ptr_x2 != NULL){
		result = 0;
		printf("Second allocation is done\n, the first value of the block is: %f\n", *ptr_x2);
	}
	else {
		printf("The 2nd allocation wasn't successful! \n");
		result = 1;
	}
	return result;
}