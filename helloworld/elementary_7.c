#include<stdio.h>
#include<math.h>

// először is korlátozzuk a számot, különben belehalunk a várakozásba, 
// hiszen nagyon sok prim szám van még INT tartományban is

int main(){
    int szam;
	int hatar;
    int i;
	int prime;
	
	setbuf(stdout, NULL);
	printf("Meddig terjedjen a primek kiírása? ");
	scanf("%d", &hatar);
    
	printf("2\n");
	for(szam=3; szam <= hatar; szam = szam + 2)
    {prime = 0;
        for(i=2; i<=sqrt(szam+1); i++){            
                if(szam % i ==0) // akkor nem prim, menj a következő osztóra
				{prime = 1;
				break;
				}
				// minden más esetben menj a következő osztóra
            
		}
		//if (prime = 0) {
			setbuf(stdout, NULL);
			printf("%d  %d\n", szam, prime); //kiíratom vele, hogy prim-e, hogy lássam, hol van a baj
			//}
	}

return 0;
}