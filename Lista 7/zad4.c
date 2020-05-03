#include <stdio.h>
#include <stdlib.h>
int foo(int tab[4],int tab2[4],int n)
{
    int x=0;
    int y=0;
    for(int i=0;i<n;i++)
    {
        if(tab[i]%2==0)
        {
            x++;
        }
    }
    for(int j=0;j<n;j++)
    {
        if(tab2[j]%2==0)
        {
            y++;
        }
    }
    if(x==y)
        return 1;
    else
        return 0;
}
int main()
{
    int n=4;
    int tab[4]={6,8,10,12};
    int tab2[4]={2,4,5,8};
    printf("%i",foo(tab,tab2,n));
}

