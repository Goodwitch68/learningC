#include<stdio.h>

int main() {

    float ut = 0;
	float ido = 0;
	float eredmeny = 0;
	
	setbuf(stdout, NULL);
	
	printf("Add meg a megtett utat (km): ");    
	fflush(stdout);
	scanf("%f", &ut);
	if ut == 0 {
		printf("Ne viccelj, ha el sem indultál, miért szórakozol velem!/n Na indulj el szépen futni!")	
		return 1;
		}
    
	printf("\nMennyi idot futottal (óra):   ");
    fflush(stdout);
	
	scanf("%f", &ido);
	if (ido == 0 ) {
		printf("Ne viccelj, nem az űrben vagy, miért szórakozol velem!/n Tehát mennyi idő alatt futottad le az %fl km-t!", ut)	

		return 1;
	}

	eredmeny = ut / ido ;
	printf("\nA futo sebessege: %f km/h ", eredmeny);

	eredmeny = ido * 60 / ut;
	printf("\nA futo irama: %f perc/km ", eredmeny);


	return 0;
}
