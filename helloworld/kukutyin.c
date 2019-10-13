#include<stdio.h>

int main(){
//definiáljuk a szükséges változókat
	int ellen;
	int adossag;
   
	setbuf(stdout, NULL);
	
	printf("\nHány ellenség van?");
	scanf("%d", &ellen);
	printf("\nHány tallér az adósság?");
	scanf("%d", &adossag);
	
	if ((ellen == 1 || ellen == 2 ) && adossag > 100){
			
			printf("\nSKANDALUM");}
	
	if (ellen == 0 && adossag > 0) {
			
			printf("\nIMBECIL");
		}
	
   

return 0;
}