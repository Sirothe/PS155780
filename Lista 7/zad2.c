#include <stdio.h>
#include <stdlib.h>
int foo(int n)
{
	for(int i=0;i<n;i++)
	{
	    if(i*i>=n)
        {
            if(i*i==n)
                return i;
            return i-1;
        }
	}
}
int main()
{
	int n=16;
	printf("%i",foo(n));
}
