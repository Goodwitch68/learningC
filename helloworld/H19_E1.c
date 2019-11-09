/*1. Given the following declaration and definition of a structure:
struct automobile {
int year;
char model[10];
int engine_power;
double weight;
} sedan = {
1997,
"New Model",
200,
2345.67};
write a program to display on the screen the initial values held by the 
structure.*/

#include <stdio.h>

main() {
	struct automobile {
		int year;
		char model[10];
		int engine_power;
		double weight;
	} sedan = { 1997, "New Model", 200, 2345.67};
	
	printf("%d, %s, %d, %8.2f", sedan.year, sedan.model, sedan.engine_power, sedan.weight);
	
	return 0;
}




