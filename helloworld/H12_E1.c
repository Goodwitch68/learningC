/*1. Given this character array:
char array_ch[5] = {'A', 'B', 'C', 'D', 'E'};
write a program to display each element of the array on the screen.*/
#include <stdio.h>

main() {
	char array_ch[5] = {'A', 'B', 'C', 'D', 'E'};
	int i;
	for (i = 0; i < 5; i++){
		printf("%c",array_ch[i]);
	}
	printf("\n");

/*2. Rewrite the program in Exercise 1, but this time use a for loop to initialize the
character array with 'a', 'b', 'c', 'd', and 'e', and then print out the value of
each element in the array.*/
	
	for (i = 0; i < 5; i++){
	array_ch[i] = i + 97;
	printf("%c",array_ch[i]);
	}


/*3. Given this two-dimensional unsized array:
char list_ch[][2] = {
'1', 'a',
'2', 'b',
'3', 'c',
'4', 'd',
'5', 'e',
'6', 'f'};
write a program to measure the total bytes taken by the array, and then print out all
elements of the array.*/

	char list_ch[][2] = {
		'1', 'a',
		'2', 'b',
		'3', 'c',
		'4', 'd',
		'5', 'e',
		'6', 'f'};
	int total_byte = sizeof (list_ch);
	int number_of_elements = total_byte / sizeof (char);
	int imax = number_of_elements / 2;
	for (i=0; i < imax; i++){
		printf("\n");
		for ( int j=0; j<2; j++){
		printf("%c", list_ch[i][j]);
		}
	}
	printf("\n");

/*4. Rewrite the program in Listing 12.5. This time put a string of characters, I like
C!, on the screen.*/

	char array_ch_new[9] = {'I',' ','l','i','k','e',' ','C','!'};
	for (i=0; array_ch_new[i]; i++){
//	for (i=0; i < 9; i++){
		printf("%c", array_ch_new[i]);
		}
	printf("\n");

/*5. Given the following array:
double list_data[6] = {
1.12345,
2.12345,
3.12345,
4.12345,
5.12345};
use the two equivalent ways taught in this lesson to measure the total memory
space taken by the array, and then display the results on the screen.*/
	double list_data[6] = {
		1.12345,
		2.12345,
		3.12345,
		4.12345,
		5.12345};
	total_byte = sizeof (list_data);
	printf("The total memory space taken by the array by method I.: %d\n", total_byte);
	total_byte = sizeof (double) * 6;
	printf("The total memory space taken by the array by method II.: %d\n", total_byte);
	return 0;
}