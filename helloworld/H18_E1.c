//1. Write a program to print out the values represented by the enumerated names
//declared in Quiz question 2 in this hour.
//2. Given the following declarations:
//typedef char WORD;
//typedef int SHORT;
//typedef long LONG;
//typedef float FLOAT;
//typedef double DFLOAT;
//write a program to measure the sizes of the synonyms to the data types.
//3. Rewrite the program in Listing 18.4. This time, add integers starting at the value of
//MIN_NUM instead of the value of MAX_NUM.

#include <stdio.h>
enum con{MIN_NUM = 0,
MAX_NUM = 100};
int fRecur(int n);

main() {
	int i, sum1, sum2;
	
	sum1 = sum2 = 0;
	for (i=1; i<=MAX_NUM; i++)
		sum1 += i;
		printf("The value of sum1 is %d.\n", sum1);
	sum2 = fRecur(MAX_NUM);
	printf("The value returned by fRecur() is %d.\n", sum2);
	
	return 0;
}
/* function definition */
int fRecur(int n) {
	if (n == MIN_NUM)
	return 0;
	return fRecur(n - 1) + n;
}

//4. Write a program that accepts command-line arguments. If the number of command-line arguments, not including the name of the executable itself, is less than
//two, print out the usage format of the program and ask the user to reenter the command-line arguments. Otherwise, display all command-line arguments entered by
//the user.
