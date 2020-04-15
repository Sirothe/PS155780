#include <stdio.h>
#include <stdlib.h>
int main()
{
    int tab[25];
    tab[0]=0;
    tab[1]=1;
    for(int i=2;i<25;i++)
    {
        tab[i]=tab[i-1]+tab[i-2];
    }
    return 0;
}

