//1. Rewrite the program in Listing 10.1. This time, use the logical expression 
//i%6 ==0 in the if statement.
#include <stdio.h>
main() {
	setbuf(stdout, NULL);
	printf("1. feladat. \n");

	int i;
	printf("Integers that can be divided by both 2 and 3\n");
	printf("(within the range of 0 to 100):\n");
	for (i=0; i<=100; i++){
		if (i%6 == 0){
		printf(" %d\n", i);
		}
	}

//2. Rewrite the program in Listing 10.1 by using nested if statements.

	printf("2. feladat. \n");
	//int i;
	printf("Integers that can be divided by both 2 and 3\n");
	printf("(within the range of 0 to 100):\n");
	for (i=0; i<=100; i++){
		if (i%2 == 0) {
			if (i % 3 == 0) {
				printf(" %d\n", i);
			}
		}
	}

//3. Write a program to read characters from the standard I/O. If the characters
// are A, B,and C, display their numeric values on the screen. 
// (The switch statement is required.)
	printf("3. feladat. \n");
	char ch = '0';
	printf("Please type in one character:\n");
	ch = getc( stdin );
	switch (ch) {
		case 'A': 
		printf("A kódja: %d\n", ch);
		break;
		case 'B': 
		printf("B kódja: %d\n", ch);
		break;
		case 'C': 
		printf("C kódja: %d\n", ch);
		break;
		default:;
	}
//4. Write a program that keeps reading characters from the standard input until 
//the character q is entered.
	printf("4. feladat. \n");
	printf("Ezt a feladatot a 8. leckénél megoldottuk már :-)\n");
	
//5. Rewrite the program in Listing 10.7. This time, instead of skipping 3 and 5, 
//skip the integer that can be evenly divided by both 2 and 3.
	printf("5. feladat. \n");
	
	int sum = 0;
	for (i=1; i<8; i++){
		if ((i % 2 ==0) || (i % 3 ==0))
			continue;
		sum += i;
	}
	printf("The sum of 1, 5, and 7 is: %d\n", sum);
	return 0;
}