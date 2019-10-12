#include<stdio.h>

int main() {

    char name[100] ;/* define name */
  
  	setbuf(stdout, NULL);
	
	printf("Hogy hívnak? ");    
	scanf("%s", &name);

	if (name[0] == 'A' || name[0] == 'B') {
	
	setbuf(stdout, NULL);
	printf("Üdvözöllek, %s!", name);
	}
    
	
	return 0;
}
