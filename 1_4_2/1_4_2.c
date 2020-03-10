#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i;
    printf("Podaj liczbe i ilosc wielokrotnosci\n");
    scanf("%i%i", &n, &m);
    for (i=1;i<=m;i++){
        printf("%i\n", n*i);
    }
    return 0;
}
