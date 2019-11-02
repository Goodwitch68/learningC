//1. Given a character string, I like C!, write a program to pass the string to a function that displays the string on the screen.

//2. Rewrite the program in exercise 1. This time, change the string of I like C! to I
//love C! by moving a pointer that is initialized with the start address of the string
//and updating the string with new characters. Then, pass the updated string to the
//function to display the content of the string on the screen.

//3. Given a two-dimensional character array, str, that is initialized as
//char str[2][15] = { "You know what,", "C is powerful." };
//write a program to pass the start address of str to a function that prints out the
//content of the character array.

//4. Rewrite the program in Listing 16.7. This time, the array of pointers is initialized
//with the following strings:
//"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", and
//"Saturday".

#include <stdio.h>
/* function declarations */
void StrPrint1(char **str1, int size);
void StrPrint2(char *str2);

/* main() function */
main() {
	char *str[4] = {"There's music in the sighing of a reed;",
	"There's music in the gushing of a rill;",
	"There's music in all things if men had ears;",
	"There earth is but an echo of the spheres.\n"
	};
	int i, size = 4;
	
	StrPrint1(str, size);
	for (i=0; i<size; i++)
	StrPrint2(str[i]);
	
	return 0;
}
	/* function definition */
void StrPrint1(char **str1, int size) 24: {
	int i;
	/* Print all strings in an array of pointers to strings */
	for (i=0; i<size; i++)
		printf("%s\n", str1[i]);
}
/* function definition */
void StrPrint2(char *str2) 32: {
/* Prints one string at a time */
	printf("%s\n", str2);
}