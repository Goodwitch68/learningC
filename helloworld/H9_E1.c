//1. Given the following statements,
//int x;
//unsigned int y;
//x = 0xAB78;
//y = 0xAB78;
//write a program to display the decimal values of x and y on the screen.

#include <stdio.h>
#include <math.h>
main() {
	setbuf(stdout, NULL);
	printf("1. feladat. \n");
	int x;
	unsigned int y;
	x = 0xAB78;
	y = 0xAB78;
	printf("The decimal values of 0xAB78 is: %d\n", x);
	printf("The decimal values of 0xAB78 is: %d\n", y);

//2. Write a program to measure the sizes of short int, long int, and long double
//on your machine.

	printf("2. feladat. \n");
	printf("The size of short int is: %d.\n", sizeof(short int));
	printf("The size of long int is: %d.\n", sizeof(long int));
	printf("The size of long double is: %d.\n", 	sizeof(long double));

//3. Write a program to multiply two signed int variables with positive values, and
//display the result as a long int.

	printf("3. feladat. \n");

	int a = 12;
	int b = 84512;
	printf("The productum of the variables is: %ld\n", a * b);
	
//4. Write a program to display negative integers in hex format along with their signed int equivalents.

	printf("4. feladat. \n");
	
	int neg_num = -1;
	printf("Please type in one negative number:\n");
	scanf ("%d", &neg_num);
	printf("%x equal %d\n", neg_num, neg_num);
	
//5. Given an angle of 30 degrees, write a program to calculate its sine and tangentvalues.

	printf("5. feladat. \n");
	
	double angle = 30;
	angle *= 3.141593 / 180.0;
	printf("The sine of angle 30degree is %f, the tangent of it is: %f\n", sin(angle), tan(angle));

//6. Write a program to calculate the non-negative square root of 0x19A1.
	printf("6. feladat. \n");
	int hex = 0x19A1;
	printf("The square root of 0x19A1 is: %f\n",sqrt(hex));
	
	return 0;
}