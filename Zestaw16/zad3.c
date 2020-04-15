#include <stdio.h>
#include <stdlib.h>
int foo(n)
{
    int suma=0;
    for(int i=1;i<=n;i++)
    {
        suma+=i*i*i;
    }
    return suma;
}
int main()
{
    printf("%i\n",foo(2));
    printf("%i\n",foo(3));
}

