#include <stdio.h>

int main() {
	//1. feladat
	printf("%c%c%c\n", 'B', 'y', 'e');
	//2. feladat
	int number1 = 123;
	float number2 = 123.456;
	printf("%d\n%f\n", number1, number2);
	printf("%-8d\n%-8f\n", number1, number2);
	//3. feladat
	int number3 = -15;
	int number4 = 150;
	int number5 = 1500;
	printf(
		"-15 hexadecimális formában: %x,\n 150 hexadecimális alakja: %x,\n1500 hexadecimális alakja: %x\n",
		number3,
		number4,
		number5
	);
	//4. feladat
	int ch;
	setbuf(stdout, NULL);
	printf("Please type in one character:\n");
	ch = getchar();
	printf("The character you just entered is:\n");
	putchar (ch);
	
	return 0;
}

//5. feladat
// the header stdio.h is missing