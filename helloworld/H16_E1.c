//1. Given a character string, I like C!, write a program to pass the string to 
//a function that displays the string on the screen.

#include <stdio.h>

void Strprint(char *ch);

main() {
	char str[] = "I like C!";
	char *ptr_str;
	ptr_str = str;
	Strprint(ptr_str);
	return 0;
}

//function defaul

void Strprint(char *ch) {
	printf("%s\n", ch);
}

