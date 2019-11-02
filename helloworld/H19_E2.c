//2. Rewrite the program in Listing 19.2. This time, create a function that can display
//the content in the employee structure. Then, make calls to the function by passing
//the structure to it.


#include <stdio.h>

main(void) {
	struct employee {
	int id;
	char name[32];
	};
	/* structure initialization */
	struct employee info = {
	1,
	"B. Smith"
	};
	
	printf("Here is a sample:\n");
	printf("Employee Name: %s\n", info.name);
	printf("Employee ID #: %04d\n\n", info.id);
	
	printf("What's your name?\n");
	gets(info.name);
	printf("What's your ID number?\n");
	scanf("%d", &info.id);
	
	printf("\nHere are what you entered:\n");
	printf("Name: %s\n", info.name);
	printf("ID #: %04d\n", info.id);
	
	return 0;
}