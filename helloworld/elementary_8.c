#include<stdio.h>


// ez tképpen a 7-es feladat, csak benéztem a számot

int main(){

	int i;
	int j;
	
	printf("A szorzótábla\n ");
	
	for(i = 1; i <= 12; i++){
		setbuf(stdout, NULL);
		printf("\nAz %d-s szorzótábla:\n", i);
		for(j = 1; j <= 12; j++){
			printf("%d * %d = %d\n", j, i, i*j);
		}
	}

	return 0;
}

//kész