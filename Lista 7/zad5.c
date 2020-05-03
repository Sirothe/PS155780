#include <stdio.h>
#include <stdlib.h>
int foo(int n)
{
    if(n>0)
    {
        if(n==0||n==1)
        {
            return 1;
        }
        else
        {
            if(n%2==1)
            {
                return 2*(foo(n-1))+6;
            }
            else
            {
                return -(foo(n-1))+5;
            }
        }
    }
}
int main()
{
    int n=4;
    printf("%i",foo(n));
}

