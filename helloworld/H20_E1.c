//1. Rewrite the program in Listing 20.1 by switching the order between the statement
//in line 15 and the statement in line 17. What do you get after running the rewritten
//program? Why?

#include <stdio.h>
#include <string.h>

main(void) {
	union menu {
	char name[23];
	double price;
	} dish;

	printf("The content assigned to the union separately:\n");
	/* reference name */
	strcpy(dish.name, "Sweet and Sour Chicken");
// line 15: 
	printf("Dish Name: %s\n", dish.name);
	/* reference price */
// line 17: 
	dish.price = 9.95;
	printf("Dish Price: %5.2f\n", dish.price);
	
	return 0;
}





