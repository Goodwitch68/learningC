#include<stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a;
	srand(time(NULL));
	a = rand() % 100 + 1;
	
	int number;
	int old_number = 0;
	int trials = 0;
	
	setbuf(stdout, NULL);
	printf(" %d", a);
	printf("\nGondoltam egy számra 1 és 100 között, találd ki melyikre!  \n");
	scanf(" %d", &number);
	trials++;
	
	while (number != a){
		trials++;
		printf("régi szám:%d, új szám:%d", old_number, number);
		if (old_number == number) {
			trials--;
			printf("ezt a számot épp most írtad, figyelj jobban!\n");
		}
		if (number < a){
			printf("Nem talált, a szám kisebb, mint a Te tipped. Próbáld újra! \n");
			old_number = number;
			scanf(" %d", &number);
		}
		else {
			printf("Nem talált, a szám nagyobb, mint a Te tipped. Próbáld újra! \n");
			old_number = number;
			scanf(" %d", &number);
		}
		
	}
	printf("Szuper! Eltaláltad! %d-t találgattál.\n", trials);
	return 0;
}
//most jó