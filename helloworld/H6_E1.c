#include <stdio.h>

int main()
{
	//1. feladat
	//Given x = 1 and y = 3, write a program to print 
	//out the results of these expressions: x += y, 
	//x += -y, x -= y, x -= -y, x *= y, and x *= -y.
	int x=1;
	int y=3;
	printf("x += y értéke:%d\n",x += y);
	x=1;
	printf("x += -y értéke:%d\n",x += (-y));
	x=1;
	printf("x -= y értéke:%d\n",x -= y);
	x=1;
	printf("x -= -y értéke:%d\n",x -= (-y));
	x=1;
	printf("x *= y értéke:%d\n",x *= y);
	x=1;
	printf("x *= -y értéke:%d\n",x *= (-y));

	//2. feladat
	//Given x = 3 and y = 6, what is the value of z after the expression
	//z = x * y == 18 is executed?
	// answer is '1'
	
	//3. feladat
	x = 1;
	printf("x++ produces:   %d\n", x++);
	printf("Now x contains: %d\n", x);
	
	//4. feladat
	x = 1;
	printf("x = x++ produces: %d\n", x = x++);
	printf("Now x contains:   %d\n", x);
	// x returns 1, bec x=x++ means: x++ returns 1

	return 0;
}

/*5. feladat
#include <stdio.h>
main()
{
   int x, y;
   x = y = 0;
   printf("The comparison result is: %d\n",  x = y); [x==y is the proper comparison]
   return 0;
}
*/
//setbuf(stdout, NULL);