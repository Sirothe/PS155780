#include <stdio.h>
#include <stdlib.h>
int foo(int n)
{
    float g;
    if(n>=0)
    {
        for(int i=1;i<=n;i++)
        {
            if(i*i<=n)
            {
                g=i;
            }
        }
        return g;
    }
}
int main()
{
    int liczba;
    scanf("%i",&liczba);
    printf("%i",foo(liczba));
    return 0;
}
