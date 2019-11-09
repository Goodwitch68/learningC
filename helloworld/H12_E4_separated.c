#include <stdio.h>

main() {
	int i;
	char array_ch_new[9] = {'I',' ','l','i','k','e',' ','C','!'};
//	for (i=0; array_ch_new[i]; i++){
	for (i=0; i<9; i++){
		printf("%c", array_ch_new[i]);
		}
	printf("\n");
	return 0;
}