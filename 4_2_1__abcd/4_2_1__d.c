#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 5

void foo(int n, int *tab)
{
	int i;
	for(i=0; i<n; i++)
	{
		tab[i] = abs(tab[i]);
	}
}
void showtab(int n, int tab[])
{
	int i;
	for(i = 0; i<n; i++)
	{
		printf("%i\n", tab[i]);
	}
}
int main()
{
	int tab[] = {5,-12,8,-13,20};
	foo(SIZE,tab);
	showtab(SIZE,tab);
	return 0;
}
