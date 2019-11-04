//1. Given the following:
//• a.) An int variable with block scope and temporary storage
//• b) A constant character variable with block scope
//• c) A float local variable with permanent storage
//• d) A register int variable
//• e) A char pointer initialized with a null character
//write declarations for all of them.

//a)

{
	int x;
}

//b) 

{
	const char ch;
}

//c)

{
	static float number;
}

//d)

register int i;

// e)

char * ptr_ch = 0;
