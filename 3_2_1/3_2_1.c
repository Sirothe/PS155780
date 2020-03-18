#include <stdio.h>
#include <stdlib.h>
int funkcja(int *a,int *b)
{
	if(*a>*b)
		return *b;
	return *a;
}
int main()
{
	int x=10;
	int y=5;
    printf("%i",funkcja(&x,&y));
    return 0;
}
