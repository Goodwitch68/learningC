//1. Write a program to read the text file haiku.txt and count the number of characters
//in the file. Also, print out the content of the file and the total character number on
//the screen.
#include <stdio.h>

enum {SUCCESS, FAIL};
int CharReadCount(FILE *fin);

main(void) {
	FILE *fptr;
	char filename[]= "haiku.txt";
	int reval = SUCCESS;

	if ((fptr = fopen(filename, "r")) == NULL){
		printf("Cannot open %s.\n", filename);
		reval = FAIL;
	} 
	else {
		CharReadCount (fptr);
		printf("Ready to close the file.");
	fclose(fptr);
	}
	
	return reval;
}

 /* function definition */
int CharReadCount(FILE *fin) {
	int c;
	int i = 0;
	while ((c=fgetc(fin)) != EOF){
		putchar(c); /* put the character to the screen */
		i++;
	}
	printf("\nThe number of characters of file: %d\n", i);
	return i;
}