//4. Write a program that accepts command-line arguments. If the number of 
//command-line arguments, not including the name of the executable itself, 
//is less than two, print out the usage format of the program and 
//ask the user to reenter the command-line arguments.
//Otherwise, display all command-line arguments entered by
//the user.

#include <stdio.h>
main (int argc, char *argv[]) {
	int i;
	if (argc < 2) {
		printf("The usage of this program is:\n");
		printf("a.EXE argument1 argument2 [...argumentN]\n");
		printf("Please start the program again'");
	}
	else {
		printf("The number of the command-line arguments are: %d\n", argc);
		printf("The command-line arguments are:\n");
		for (i=1; i<argc; i++){
			printf("%s ", argv[i]);
		}
		printf("\n");
	}
	return 0;
}