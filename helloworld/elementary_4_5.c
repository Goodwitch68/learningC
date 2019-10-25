#include<stdio.h>

int main() {

	int szam;
	int osszeg = 0;

	setbuf(stdout, NULL);
	printf("Írj egy számot: ");
	scanf("%d", &szam);

	// és akkor most legyen itt ciklussal, mert erre nincs matematikai képlet, bár gondolkozom rajta :-)

	int i;
	for (i = 1; i <= szam; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			osszeg = osszeg + i;
		}
	}
	setbuf(stdout, NULL);
	printf("A hárommal vagy öttel osztható számok összege 1-%d-ig:%d", szam, osszeg);
	return 0;
}
// kész