//2. Rewrite the program in Listing 20.2. This time, print out values held by all the
//members in the info union each time one of the members is assigned a value.

 #include <stdio.h>

	union employee {
		int start_year;
		int dpt_code;
		int id_number;
	} info;
	
void Display (union employee s);

main(void) {

	/* initialize start_year */
	info.start_year = 1997;
	Display (info);
	/* initialize dpt_code */
	info.dpt_code = 8;
	Display (info);
	/* initialize id */
	info.id_number = 1234;
	Display (info);

	return 0;
}
		/* display content of union */
void Display(union employee s) {
	printf("Start Year: %d\n", s.start_year);
	printf("Dpt. Code: %d\n", s.dpt_code);
	printf("ID Number: %d\n", s.id_number);
}