//3. Given the string "Disk file I/O is fun." write a program to write the string
//into a file called test_21.txt by writing one character at a time. Meanwhile, print
//out the string on the screen.
#include <stdio.h>
#include <string.h>

enum {SUCCESS, FAIL};
void CharWrite(char *GivenStr, FILE *fout);

main(void) {
	FILE *fptr;
	char filename[] = "test_21.txt";
	char GivenStr[]= "Disk file I/O is fun.";
	int reval = SUCCESS;

	if ((fptr = fopen(filename, "w")) == NULL){
		printf("Cannot open %s.\n", filename);
		reval = FAIL;
	} 
	else {
		CharWrite (GivenStr, fptr);
		fclose(fptr);
	}
	return reval;
}

 /* function definition */
void CharWrite(char *Str, FILE *fout) {
	int i = 0;
	int c;
	while ((c = Str[i]) != '\0') {
		putchar (c);
		fputc(c, fout); /* write the char to the output file */
		i++;
	}
}