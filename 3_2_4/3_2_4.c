#include <stdio.h>
#include <stdlib.h>
void funkcja(int* a,int* b)
{
	if(*a>*b)
	{
		int temp=*a;
		*a=*b;
		*b=temp;
	}
}
int main()
{
	int x=5,y=10;
	funkcja(&x,&y);
	printf("%i%i",x,y);
    return 0;
}
