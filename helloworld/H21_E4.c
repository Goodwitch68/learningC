//4. Rewrite exercise 3. This time, try to write one block of characters 
//(that is, one string) at a time. 

#include <stdio.h>
#include <string.h>

enum {SUCCESS, FAIL};
void BlockWrite(char *GivenStr, FILE *fout);

main(void) {
	FILE *fptr;
	char filename[] = "test_21.txt";
	char GivenStr[]= "Anyting else, what you want.";
	int reval = SUCCESS;

	if ((fptr = fopen(filename, "w")) == NULL){
		printf("Cannot open %s.\n", filename);
		reval = FAIL;
	} 
	else {
		BlockWrite (GivenStr, fptr);
		fclose(fptr);
	}
	return reval;
}

 /* function definition */
void BlockWrite(char *Str, FILE *fout) {
	int length;
	length = strlen(Str);
	fwrite(Str, sizeof(char), length, fout);
	printf ("%s\n", Str);
}