#include <stdio.h>
#include <stdlib.h>

int foo(int a)
{
    return a+7;
}

int main()
{
    int tab[4][4] = {{1,0,7,-2},{7,1,0,7},{-8,4,1,2}, {-9,-8,-2,-3}};
    int a = sizeof(int*); //a=8
    int * p = tab+1; //p=0x61fdd0 , *p =7
    int r = *(*(tab+2)-1); // r=7 , &r=0x61fe0c
    *p=foo(*p); //p=14 , **p =brak dostepu
    r= *(*(tab+1)+4); // r=-8 , &r=0x61fe0c
    return 0;
}
