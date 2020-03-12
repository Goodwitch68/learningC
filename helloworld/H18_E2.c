//2. Given the following declarations:
//typedef char WORD;
//typedef int SHORT;
//typedef long LONG;
//typedef float FLOAT;
//typedef double DFLOAT;
//write a program to measure the sizes of the synonyms to the data types.

#include <stdio.h>
main() {
typedef char WORD;
typedef int SHORT;
typedef long LONG;
typedef float FLOAT;
typedef double DFLOAT;

printf("The size of WORD is: %d\n", sizeof(WORD));
printf("The size of SHORT is: %d\n", sizeof(SHORT));
printf("The size of LONG is: %d\n", sizeof(LONG)); 
printf("The size of FLOAT is: %d\n", sizeof(FLOAT));
printf("The size of DFLOAT is: %d\n", sizeof(DFLOAT));

return 0;
}

