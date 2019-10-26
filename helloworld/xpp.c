#include <stdio.h>

int main()
{
	int x = 1;
	printf("x = x + 1 értéke:%d\n",x = x + 1);
	printf("Now x contains: %d\n", x);

	x = 1;
	printf("x++ produces:   %d\n", x++);
	printf("Now x contains: %d\n", x);


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