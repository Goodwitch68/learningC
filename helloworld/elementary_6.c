#include<stdio.h>

int main() {

    int szam;
	int osszeg = 0;
	int szorzat = 0;
	char dontes 
  
  	setbuf(stdout, NULL);
	
	printf("Írj egy számot: ");    
	scanf("%d", &szam);
	
	printf("A számok összegét (S) vagy szorzatát számoljam ki (P)?");    
	scanf("%s", &dontes);
	
	if (dontes == 'S') {
		
		osszeg = (1 + szam)*szam/2; 
		setbuf(stdout, NULL);
		printf("A számok összege 1-%d-ig:%d", szam, osszeg);
	}
	if (dontes == 'P') {
		
		szorzat = (1 + szam)*szam/2; 
		setbuf(stdout, NULL);
		printf("A számok összege 1-%d-ig:%d", szam, osszeg);
		int i;
	for (i=1; i <= szam; i++)
	{
		if (i % 3 == 0 || i % 5 == 0) {
			
			osszeg = osszeg + i;
			
		}
	}
		
	
	setbuf(stdout, NULL);
	printf("A hárommal vagy öttel osztható számok összege 1-%d-ig:%d", szam, osszeg);
	
  
	return 0;
}
// kész