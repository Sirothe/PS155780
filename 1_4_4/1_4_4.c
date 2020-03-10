#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("Podaj nieujemna liczbe calkowita n:\n");
    scanf("%i", &n);
    if(n>0){
        int wynik = 1;
        for(i=1; i<=n; i++){
            wynik *=i;
        }
        printf("\n%i", wynik);
    }
    else{
        printf("n nie moze byc ujemne");
    }
    return 0;
}
