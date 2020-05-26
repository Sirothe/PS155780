#include <stdio.h>
#include <stdlib.h>
void foo(int n,int m,int k,int tab[][m][k])
{
    free(tab);
}
int main()
{
    int tablica[2][2][2]={{{1,2},{2,3}},{{3,4},{4,5}}};
    foo(2,2,2,tablica);
    return 0;
}
