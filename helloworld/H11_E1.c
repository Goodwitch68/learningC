//1. Given three integer variables, x = 512, y = 1024, and z = 2048, write a program
//to print out their left values as well as their right values.

#include <stdio.h>

main() {
	int x = 512;
	int y = 1024;
	int z = 2048;

	printf("x: address=%p, content=%d\n", &x, x);
	printf("y: address=%p, content=%d\n", &y, y);
	printf("z: address=%p, content=%d\n", &z, z);


//2. Write a program to update the value of the double variable flt_num from 123.45
//to 543.21 by using a double pointer.

	double flt_num = 123.45;
	double * ptr_flt_num = & flt_num;
	* ptr_flt_num = 543.21;
	printf("flt_num =%f\n", flt_num);


//3. Given a character variable ch and ch = 'A', write a program to update the value of
//ch to decimal 66 by using a pointer.

	char ch = 'A';
	int *ptr_ch = &ch;
	*ptr_ch = 66;
	printf("ch returns %c");

//4. Given that x=5 and y=6, write a program to calculate the multiplication of the two
//integers and print out the result, which is saved in x, all in the way of indirection
//(that is, using pointers).

	return 0;
}