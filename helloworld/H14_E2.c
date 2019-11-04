//2. Rewrite the program in Listing 14.2. This time, pass the int variable x and the
//float variable y as arguments to the function_1() function. What do you get on
//your screen after running the program?

#include <stdio.h>

int x = 1234; /* program scope */
double y = 1.234567; /* program scope */
	
void function_1(int x, double y) {
printf("From function_1:\n x=%d, y=%f\n", x, y);
	}

main() {
	int x = 4321; /* block scope 1*/
	function_1(x, y);
	printf("Within the main block:\n x=%d, y=%f\n", x, y);
	/* a nested block */
	{
		double y = 7.654321; /* block scope 2 */
		function_1(x, y);
		printf("Within the nested block:\n x=%d, y=%f\n", x, y);
	}
	return 0;
/* Answer: 
From function_1:
 x=4321, y=1.234567
Within the main block:
 x=4321, y=1.234567
From function_1:
 x=4321, y=7.654321
Within the nested block:
 x=4321, y=7.654321
 */

}