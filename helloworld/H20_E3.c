//3. Write a program to ask the user to enter his or her name. Then ask the user
//whether he or she is a U.S. citizen. If the answer is Yes, ask the user to enter the
//name of the state where he or she comes from. Otherwise, ask the user to enter the
//name of the country he or she comes from. (You're required to use a union in your
//program.)

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