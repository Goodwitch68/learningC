//2. Declare and define a function, called MultiTwo(), that can perform multiplication
//on two integer variables. Call the MultiTwo() function from the main() function
//and pass two integers to MultiTwo(). Then print out the result returned by the
//MultiTwo() function on the screen.

#include <stdio.h>

MultiTwo(int x, int y);

main () {
	 int i = 24;
	 int j = 13;
	 printf("%d multiplied by %d equal %d.\n", i, j, MultiTwo(i,j));
	 return 0;
}

MultiTwo(int x, int y) {
	return x * y;
}

