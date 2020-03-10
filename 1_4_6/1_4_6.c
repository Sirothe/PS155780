#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj liczbe calkowita n\n");
    scanf("%i", &n);
    int wynik = 1;
    if(n>2){
    	int i;
        for(i=2; i <=n; i+=2){
            wynik*=i;
        }
        printf("%i", wynik);
    }
    return 0;
}
