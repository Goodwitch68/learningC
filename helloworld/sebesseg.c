#include<stdio.h>

int main(){

    double ut, ido, eredmeny;      
	printf("Add meg a megtett utat (km): ");
    
	scanf("%lf", &ut);

    printf("\nMennyi időt futottál (óra):   ");
    scanf("%lf", &ido);

     eredmeny = ut / ido ;
     printf("\nA futó sebessége: %lf km/h ", eredmeny);
    
     eredmeny = ido * 60 / ut;
     printf("\nA futó irama: %lf perc/km ", eredmeny);
	

return 0;
}
