//1. Write a program to ask the user to enter the total number of bytes he or she wants
//to allocate. Then, initialize the allocated memory with consecutive integers, starting
//from 1. Add all the integers contained by the memory block and print out the final
//result on the screen.

#include <stdio.h>
#include <stdlib.h>

main() {
	int SizeofAllmemory;
	int *ptr_x;
	int sum = 0;
	int result;
	setbuf(stdout, NULL);
	printf("Enter the total number of bytes you want to allocate:");
	scanf("%d", &SizeofAllmemory);
	ptr_x = malloc (SizeofAllmemory/2 * sizeof(int));
	//ptr_x = malloc (SizeofAllmemory); Ez vajon miért nem jó helyette? segmentation faultot ad vissza
	if (ptr_x != NULL){
		for (int i = 0; i < SizeofAllmemory/2; i++){
			ptr_x[i] = i + 1;
			printf("%d\n", *(ptr_x + i));
		}
		printf("Az összeg az elején: %d\n", sum);
		for (int i = 0; i < SizeofAllmemory/2; i++){
			sum += ptr_x[i];
			printf("Az összeg most: %d\n", sum);
		}
		printf("The sum is %d\n", sum);
		result = 0;
	}
	else {
		printf("malloc() function failed.\n");
		result = 1;
	}
	printf("%d", result);
	return result;
}


