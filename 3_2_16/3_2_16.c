#include <stdio.h>
#include <stdlib.h>
void funkcja(int const*a,int*const b)
{
	*b=*a;
}
int main()
{
	int x=6,y=8;
	funkcja(&x,&y);
	printf("%i%i",x,y);
    return 0;
}
