//3. Given a two-dimensional character array, str, that is initialized as
//char str[2][15] = { "You know what,", "C is powerful." };
//write a program to pass the start address of str to a function that prints out the
//content of the character array.

#include <stdio.h>

void Strprint(char * ch [][15]);

main() {
	char str[2][15] = { "You know what,", "C is powerful." };
	char *ptr_str;
	ptr_str = str;
	Strprint(ptr_str);
	Strprint(ptr_str + 15);
	return 0;
}

//function defaul

void Strprint(char *ch [][15]) {
	printf("%s\n", ch);
}

//fordításkor nyom egy csomó warningot, amit nem tudok értelmezni, viszont működik.