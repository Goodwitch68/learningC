//1. In Hour 18, “Using Special Data Types and Functions,” you learned how to define
//enum data. Rewrite the program in Listing 18.1 with the #define directive.

#include <stdio.h>
/* main() function */
main()
{
	enum language {
		human=100,
		animal=50,
		computer
		};
	enum days{SUN,
		MON,
		TUE,
		WED,
		THU,
		FRI,
		SAT};
	
	printf(“human: %d, animal: %d, computer: %d\n”, human, animal, computer);
	printf(“SUN: %d\n”, SUN);
	printf(“MON: %d\n”, MON);
	printf(“TUE: %d\n”, TUE);
	printf(“WED: %d\n”, WED);
	printf(“THU: %d\n”, THU);
	printf(“FRI: %d\n”, FRI);
	printf(“SAT: %d\n”, SAT);
	
	return 0;
	}

//2. Define a macro name that can multiply two arguments. Write a program to 
//calculate the multiplication of 2 and 3 with the help of the macro. 
//Print out the result of the multiplication.

//3. Rewrite the program in Listing 23.2 with the #if, #elif, and #else directives.

 #include <stdio.h>

#define UPPER_CASE 0
#define NO_ERROR 0

main(void) {
	#ifdef UPPER_CASE
		printf(“THIS LINE IS PRINTED OUT,\n”);
		printf(“BECAUSE UPPER_CASE IS DEFINED.\n”);
	#endif
	#ifndef LOWER_CASE
		printf(“\nThis line is printed out,\n”);
		printf(“because LOWER_CASE is not defined.\n”);
	#endif
	
	return NO_ERROR;
}

