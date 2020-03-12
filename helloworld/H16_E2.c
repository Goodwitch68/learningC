//2. Rewrite the program in exercise 1. This time, change the string of I like C! to I
//love C! by moving a pointer that is initialized with the start address of the string
//and updating the string with new characters. Then, pass the updated string to the
//function to display the content of the string on the screen.#include <stdio.h>
#include <stdio.h>
void Strprint(char *ch);

main() {
	char str[] = "I like C!";
	char *ptr_str;
	ptr_str = str;
	*(ptr_str + 3) = 'o';
	*(ptr_str + 4) = 'v';
	Strprint(ptr_str);
	return 0;
}

//function definition

void Strprint(char *ch) {
	printf("%s\n", ch);
}



