#include<stdio.h>

int main() {

    char name [100]; /* define name */
  
  	setbuf(stdout, NULL);
	
	printf("Hogy hívnak? ");    
	scanf("%s", &name);

	if ( name == "Alice" || name == "Bob") {
	
		setbuf(stdout, NULL);
		printf("Üdvözöllek, %s!", name);
	}
    
	printf("%s!", name);
	printf ("%d\n", name == "Bob");
	
	return 0;
}
