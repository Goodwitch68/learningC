//2. Write a program to receive a string entered by the user, and then save the string
//into a file with the name also given by the user.

#include <stdio.h>
#include <string.h>

enum {SUCCESS, FAIL};
void LineWrite(char *GivenStr, FILE *fout);

main(void) {
	FILE *fptr;
	char filename[32];
	char GivenStr[80];
	int reval = SUCCESS;

	setbuf(stdout, NULL);
	printf("\nEnter a string, what you want to save:\n");
	gets (GivenStr);
	printf ("\nEnter the name of file where you want to save:\n");
	gets (filename);
	if ((fptr = fopen(filename, "w")) == NULL){
		printf("Cannot open %s.\n", filename);
		reval = FAIL;
	} 
	else {
		LineWrite (GivenStr, fptr);
		printf("Ready to close the file.");
		fclose(fptr);
	}
	return reval;
}

 /* function definition */
void LineWrite(char *Str, FILE *fout) {
	fputs(Str, fout); /* write the line to the output file */
	printf("\nDone!");
}