#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void foo(int n, int *tab)
{
	int i;
	for(i=0; i<n; i++)
	{
		tab[i] = i;
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
	int tab[] = {6,7,8,9,10};
	foo(SIZE, tab);
	showtab(SIZE,tab);
	return 0;
}
