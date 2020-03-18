#include <stdio.h>
#include <stdlib.h>
int funkcja(int n)
{
	return malloc(n*sizeof(int));
}
int main()
{
    printf("%p",funkcja(9));
    return 0;
}
