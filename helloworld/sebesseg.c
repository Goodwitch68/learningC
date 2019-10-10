#include<stdio.h>

int main() {

    float ut = 0;
	float ido = 0;
	float eredmeny = 0;
	
	setbuf(stdout, NULL);
	
	printf("Add meg a megtett utat (km): ");    
	scanf("%f", &ut);


    printf("\nMennyi idot futottal (ora):   ");
    scanf("%f", &ido);

	if (ido == 0 || ut == 0) {
		return 1;
	}

	eredmeny = ut / ido ;
	printf("\nA futo sebessege: %f km/h ", eredmeny);

	eredmeny = ido * 60 / ut;
	printf("\nA futo irama: %f perc/km ", eredmeny);


	return 0;
}
