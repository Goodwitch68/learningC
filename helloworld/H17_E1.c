//1. Write a program to ask the user to enter the total number of bytes he or she wants
//to allocate. Then, initialize the allocated memory with consecutive integers, starting
//from 1. Add all the integers contained by the memory block and print out the final
//result on the screen.
//2. Write a program that allocates a block of memory space to hold 100 items of the
//float data type by calling the calloc() function. Then, reallocate the block of
//memory in order to hold 50 more items of the float data type.
//3. Write a program to ask the user to enter the total number of float data. Then use
//the calloc() and malloc() functions to allocate two memory blocks with the
//same size specified by the number, and print out the initial values of the two memory blocks.
//4. Rewrite the program in Listing 17.4. This time, use the two special cases of the
//realloc() function to replace the malloc() and free() functions.

 /* 17L04.c: Using the realloc() function */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* function declaration */
void StrCopy(char *str1, char *str2);
/* main() function */
main() {
	char *str[4] = {"There's music in the sighing of a reed;",
	"There's music in the gushing of a rill;",
	"There's music in all things if men had ears;",
	"There earth is but an echo of the spheres.\n"
	};
	char *ptr;
	int i;
	
	int termination = 0;
	
	ptr = malloc((strlen(str[0]) + 1) * sizeof(char));
	if (ptr == NULL){
	printf("malloc() failed.\n");
	termination = 1;
	}
	else{
	StrCopy(str[0], ptr);
	printf("%s\n", ptr);
	for (i=1; i<4; i++){
	ptr = realloc(ptr, (strlen(str[i]) + 1) * sizeof(char));
	if (ptr == NULL){
	printf("realloc() failed.\n");
	termination = 1;
	i = 4; /* break the fro loop */
	}
	else{
	StrCopy(str[i], ptr);
	printf("%s\n", ptr);
	}
	}
	}
	free(ptr);
	return termination;
	}
	/* funciton definition */
	void StrCopy(char *str1, char *str2)
	{
	int i;
	
	for (i=0; str1[i]; i++)
	str2[i] = str1[i];
	str2[i] = ‘\0';
	}