//2. Rewrite the program in Listing 19.2. This time, create a function that can display
//the content in the employee structure. Then, make calls to the function by passing
//the structure to it.


#include <stdio.h>

	struct employee {
		int id;
		char name[32];
	};
void Print(struct employee s);

main() {

	/* structure initialization */
	struct employee info = {
	1,
	"B. Smith"
	};
	
	printf("Here is a sample:\n");
	Print (info);
	setbuf(stdout, NULL);
	printf("What's your name?\n");
	gets(info.name);
	printf("What's your ID number?\n");
	scanf("%d", &info.id);
	
	printf("\nHere are what you entered:\n");
	Print (info);
	
	return 0;
}

void Print (struct employee s) {
	printf ("Name: %s\n", s.name);
	printf ("ID# : %d\n", s.id);
}