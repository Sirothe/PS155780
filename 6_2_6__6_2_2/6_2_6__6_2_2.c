#include <stdio.h>
#include <stdlib.h>
int (*funkcja(int n,int m,int k))[]
{
    return malloc(n*sizeof(int[m][k]));
}
void uwo(int n,int m,int k,int tab[][m][k])
{
    free(tab);
}
int main()
{
    int ***tab = funkcja(3,3,3);
    uwo(3,3,3, tab);
    return 0;
}
