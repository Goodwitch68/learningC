//1. Given a character array in the following statement,
//char str1[] = "This is Exercise 1.";
//write a program to copy the string from str1 to another array, called str2.
#include <stdio.h>
#include <string.h>
main() {
	setbuf(stdout, NULL);
	char str1[] = "This is Exercise 1.";
	char str2[strlen(str1)];
	strcpy (str2, str1);
	printf("%s\n", str2);


//2. Write a program to measure the length of a string by evaluating the elements in a
//character array one by one until you reach the null character. To prove you get the
//right result, you can use the strlen() function to measure the same string again.

	char array_ch_new[10] = {'I',' ','l','i','k','e',' ','C','!','\0'};
	int i;
	int length = 0;
	for (i=0; array_ch_new[i]; i++) {
		length ++;
	}
	printf("The lenght of string is %d\n", length);
	length = strlen(array_ch_new);
	printf("The lenght of string is %d\n", length);

//3. Rewrite the program in Listing 13.4. This time, convert all uppercase characters to
//their lowercase counterparts.


	char str[80];
	int delt = 'a' - 'A';
	printf("Enter a string less than 80 characters:\n");
	gets(str);
	i = 0;
	while (str[i]) {
	if ((str[i] >= 'A') && (str[i] <= 'Z'))
		str[i] += delt; /* convert to lower case */
		++i;
	}
	printf("The entered string is (in lowercase):\n");
	puts(str);


//4. Write a program that uses the scanf() function to read in two integers entered by
//the user, adds the two integers, and then prints out the sum on the screen.

	int x = 0;
	int y = 0;
	printf("Enter two integer:\n");
	scanf("%d %d", &x, &y);
	printf("The sum of the numbers is %d", x + y);
	return 0;
}