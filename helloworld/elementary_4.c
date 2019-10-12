#include<stdio.h>

int main() {

    int szam;
	int osszeg;
  
  	setbuf(stdout, NULL);
	
	printf("Írj egy számot: ");    
	scanf("%d", &szam);

	osszeg = (1+szam)*szam/2; // persze lehetett volna nagyon idétlen ciklussal is megoldani, de ez elegánsabb megoldásnak tűnt :-)
	//a 
	//
	setbuf(stdout, NULL);
	printf("A számok összege 1-%d-ig:%d", szam, osszeg);
	
  
	return 0;
}
