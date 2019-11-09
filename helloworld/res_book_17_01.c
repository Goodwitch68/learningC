#include <stdio.h>
#include <stdlib.h>
/* main() function */
main() {
int *ptr_int; //ez egy pointer, nekem úgy viselkedik, mitha, egy tömböt definiáltunk volna 
int i, sum; //i a ciklusváltozó, sum az összeg, amit keresünk
int max = 0; // ebben a változóban van a user által megadott legmagasabb szám
int termination = 0; //ez az allokáció sikerességének vizsgálatához kell
printf("Enter the total number of integers:\n"); //itt kérjük be a max-ot
scanf("%d", &max); // itt olvasuk be a maxot
/* call malloc() */
ptr_int = malloc(max * sizeof(int));// itt hívjuk meg a malloc fügvényt, és foglaljuk le a memóriát
if (ptr_int == NULL){ //megvizsgáljuk, hogy sikerült-e, mert a malloc függvény NULL-ra teszi a pointert, ha nem sikerül a memória allokálás
printf("malloc() function failed.\n"); // sikertelenség esetén kiírja a sikertelenséget
termination = 1; // a kiszállási értéket 1-re állítja, hogy a gép tudja, hogy nem sikerült valami
}
else{ // itt van a tképpeni működés
for (i=0; i<max; i++) //for ciklussal feltöltjük a memóriát 1- max-ig
ptr_int[i] = i + 1; //megtaláltam ezt a szintaktikát is, ez azt jelenti, hogy a "ptr_int -től jobbra i lépéssel"-re mutat, és oda ír.
}
sum = 0;// az összeget lenullázzuk
for (i=0; i<max; i++) //újabb for ciklussal kiolvassuk az értékeket és összeadjuk őket
sum += ptr_int[i]; //itt elmaradt a {{}, mert csak egy parancs lenne a blokkban, én nem hagynám el
//egyébként pedig itt olvassa vissza a beírt értéket a ptr_int -től i lépéssel jobbra lévő címről.
printf("The sum is %d.\n", sum); //eredmény kiíratása
free(ptr_int); // a memória felszabadítása
return termination;
}