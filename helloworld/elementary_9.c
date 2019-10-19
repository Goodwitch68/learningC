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
	//printf(" %d", a);
	
	printf("\nGondoltam egy számra 1 és 100 között, találd ki melyikre!  \n");
	scanf(" %d", &number);
	trials++;
	
	while (number != a){
		trials++;
		if (number < a){
			printf("Nem talált, a szám kisebb, mint a Te tipped. Próbáld újra! \n");
			scanf(" %d", &number);
			}
		else {
			printf("Nem talált, a szám nagyobb, mint a Te tipped. Próbáld újra! \n");
			scanf(" %d", &number);
			}
		if (old_number == number) {
			trials--;
			printf("ezt a számot épp most írtad, figyelj jobban!");
			}
		old_number = number;
	}
	printf("Szuper! Eltaláltad! %d-t találgattál.\n", trials);
	return 0;
}
