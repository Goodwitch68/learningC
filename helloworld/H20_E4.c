//4. Modify the program you wrote in Exercise 3. Add a bit field and use it as a flag. If
//the user is a U.S. citizen, set the bit field to 1. Otherwise, set the bit field to 0. Print
//out the user's name and the name of country or state by checking the value of the
//bit field.

#include <stdio.h>
#include <string.h>

main() {
	union citizens {
	char name[40];
	char citstat[4];
	char state [20];
	char country [30];
	} user;

	setbuf(stdout, NULL);
	printf("Enter your name:");
	gets (user.name);
	printf ("Are you a U.S. citizen (Yes/No)");
	gets (user.citstat);
	printf ("%s\n", user.citstat);
	int eval = user.citstat != "No";
	printf ("%d\n", eval);
	if (user.citstat != "No") {
		printf("Enter the name of the state where you come from.");
		scanf("%s", &user.state);
	}
	else {
		printf("Enter the name of the country where you come from.");
		scanf("%s", &user.country);
	}

	return 0;
}