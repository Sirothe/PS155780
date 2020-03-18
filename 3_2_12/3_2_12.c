#include <stdio.h>
#include <stdlib.h>
int* funkcja(int n)
{
	return malloc(n*sizeof(double));
}
int main()
{
	printf("%p",funkcja(8));
    return 0;
}
