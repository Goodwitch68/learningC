#include<stdio.h>

int main() {

    int szam = 0;
	int osszeg = 0;
	int szorzat = 1;
	char dontes = 'p';
  
  	setbuf(stdout, NULL);
	
	printf("Írj egy számot: ");    
	scanf("%d", &szam);
		
	printf("A számok összegét (s) vagy szorzatát (p) számoljam ki 1-től n-ig? ");    
	scanf(" %c", &dontes);
	printf("%c", dontes);
	
	while (dontes != 's' && dontes !='p') {
		printf("Kérlek nyomj s-t vagy p-t!\n");
		scanf("%c", &dontes);
	}
	if (dontes == 's') {
		osszeg = (1 + szam)*szam/2; 
		printf("A számok összege 1-%d-ig:%d\n", szam, osszeg);
	}
	if (dontes == 'p') {
		for (int i = 1; i <= szam; i++) {
			szorzat = szorzat * i; 
		}
		printf("A számok produktuma 1-%d-ig:%d\n", szam, szorzat);
	}
	
  
	return 0;
}
//ebben is van még varázslat. Az előtt lefut a while ciklus,
// mielőtt be olvashatná a dontes valtozót. 
//Látszólag nem csinál hülyeséget a program, mert értelmes így is, de ez hiba
