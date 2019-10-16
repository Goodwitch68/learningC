#include<stdio.h>
#include<math.h>

int main(){

    int szam;
    int i;
    int darab=0;

    for(szam=2;     ; szam++)
    {
        darab = 0;

            for(i=1; i<=sqrt(szam); i++)
            {
                if(szam % i == 0){ darab++; }
                if(darab>2){ break; }
            }

        if( darab == 1){ printf("%d\n", szam); }
    }

return 0;
}