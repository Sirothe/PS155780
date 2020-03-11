#include <stdio.h>
#include <stdlib.h>
int foo(int n)
{
    int wynik=2;
    if (n>=0)
    {
        for(int i=1;i<n;i++)
        {
        wynik*=2;
        }
    return wynik;
    }
}
int main()
{
    int liczba;
    scanf("%i",&liczba);
    printf("%i",foo(liczba));
    return 0;
}
