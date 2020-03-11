#include <stdio.h>
#include <stdlib.h>
int foo(int n)
{
    int wynik=1;
    for(int i=2;i<=n;i++)
    {
        wynik*=i;
    }
    return wynik;
}
int main()
{
    int liczba;
    scanf("%i",&liczba);
    printf("%i",foo(liczba));
    return 0;
}
