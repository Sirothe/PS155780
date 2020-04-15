#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[]={3,4,5,2,-1};
    tab[2]=3;
    *(tab+2)='c';
    *(tab+3)="w";
    *(tab+3)*=2;
    return 0;
}

