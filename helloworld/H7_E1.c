#include <stdio.h>

int main() {
	//1.-2. feladat
	//What is the difference between 
	//the following two pieces of code?
	// for (i=0, j=1; i<8; i++, j++)
	// printf("%d  +  %d  =  %d\n", i, j, i+j);
	//
	//for (i=0, j=1; i<8; i++, j++);
	//printf("%d  +  %d  =  %d\n", i, j, i+j);
	
	//in the line 11 there is an "empty" loop, it does not anyting 
	
	//2. feladat
	//Write a program that contains the two pieces of 
	//code shown in exercise 1, and then execute the program. 
	//What are you going to see on the screen?
	int i;
	int j;
	printf("2. feladat\n");
	for (i = 0, j = 1; i < 8; i++, j++)
		printf("%d + %d = %d\n", i, j, i+j);
	
	
	for (i = 0, j = 1; i < 8; i++, j++);
		printf("%d + %d = %d\n", i, j, i+j);
	//the 2. loop doesn't do anything
	
	//3. feladat
	//Rewrite the program in Listing 7.4. This time,
	//you want the for statement to keep looping until
	//the user enters the character K.
	int c;
	setbuf(stdout, NULL);
	printf("\n3. feladat\n");
	printf("Enter a character:\n(enter K to exit)\n");
	c = ' ';
	while (c = getc(stdin) != 'K') {
		putchar(c);
	}
	printf("\nOut of the for loop. Bye!\n");
	
	
	//4. feladat
	//Rewrite the program in Listing 7.6 by replacing 
	//the do-while loop with a for loop.
	printf("\n4. feladat\n");
	for (i = 65; i < 72; i++) {
		printf("The numeric value of %c is %d.\n", i, i);
	}
	
	//5. feladat
	//Rewrite the program in Listing 7.7. 
	//This time, use a while loop as the outer loop 
	//and a do-while loop as the inner loop.
	i = 1;
	printf("\n5. feladat\n");
	while (i <= 3) {   // outer loop 
		printf("The start of iteration %d of the outer loop.\n", i);
		j = 1;
		do {
			printf("    Iteration %d of the inner loop.\n", j);
			j++;
		} while (j <= 4);
		printf("The end of iteration %d of the outer loop.\n", i);
		i++;
	}
	return 0;
}

