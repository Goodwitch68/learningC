//1. Given x = 0xEFFF and y = 0x1000 (that is, EFFF and 1000 as hex values), what
//hex values do you get by evaluating ~x and ~y?
//
// Egymás ellentettjei, ezt már tisztáztuk :-)

//2. Taking the values of x and y assigned in Exercise 1, write a program that prints
//out the values of !x and !y by using both the %d and %u formats in the printf()
//function.

#include <stdio.h>

main() {
	setbuf(stdout, NULL);
	printf("2. feladat. \n");
	int x = 0xEFFF;
	int y = 0x1000;
	printf("The values of !x and !y is: %d, %d\n", !x, !y);
	printf("The values of !x and !y is: %u, %u\n", !x, !y);

 // Na, hogy ennek mi értelme volt :-(

//3. Given x = 123 and y = 4, write a program that displays the results of the 
//expressions x << y and x >> y.
	printf("3. feladat. \n");
	x = 123;
	y = 4;
	printf("The values of x << y is: %d\n", x << y);
	printf("The values of x >> y is: %d\n", x >> y);



//4. Write a program that shows the values (in hex) of the expressions 0xFFFF^0x8888,
//0xABCD & 0x4567, and 0xDCBA | 0x1234.

	printf("4. feladat. \n");
	printf("The value of the expressions 0xFFFF^0x8888 is: %X\n", 0xFFFF^0x8888);
	printf("The value of the expressions 0xABCD & 0x4567 is: %X\n", 0xABCD & 0x4567);
	printf("The value of the expressions 0xDCBA | 0x1234 is: %X\n", 0xDCBA | 0x1234);
	
//5. Use the ?: operator and the for statement to write a program that keeps taking the
//characters entered by the user until the character q is accounted. (Hint: Put x!=’q’
//? 1 : 0 expression as the second expression in a for statement.)

	printf("5. feladat. \n");
	char ch = '0';
	printf("Please type in one character:\n");
	for (int i=0; ch!='q' ? 1 : 0;) {
		ch = getc(stdin);
	}
	return 0;
}