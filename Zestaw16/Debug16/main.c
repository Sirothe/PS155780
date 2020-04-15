#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    return *a-*b+3;
}

int main()
{
    int tab[] = {0,1,-3,7,0,9,8,1};
    int *wsk=tab-2;
    int b = *(wsk+=3); //b=1
    int c = b+2; // b=1  , c=3
    int d = foo(&c,&b); // b=1  , c=3  , d=5
    int e = (wsk+=-2)[-1]; // b=1  , c=3  , d=5  , e=3
    e = (d *= 3) + (c /= 2); // b=1  , c=1  , d=15  , e=16
    c = d - (b+=2); // b=3  , c=12  , d=15  , e=16
    b = *wsk + e; // b=19  , c=12  , d=15  , e=16
    return 0;
}

