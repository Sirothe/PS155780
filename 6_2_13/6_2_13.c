#include <stdio.h>
#include <stdlib.h>
int foo(int n,int m,int tab[][m])
{
    int suma=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            suma+=tab[i][j];
        }
    }
    return suma;
}
int main()
{
    int tabela[2][2]={{1,2},{3,4}};
    printf("%d",foo(2,2,tabela));
}
