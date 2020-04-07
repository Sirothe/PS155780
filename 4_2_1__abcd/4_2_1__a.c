#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void foo(int n, int *tab)
{
	int i;
	for(i=0; i<n; i++)
	{
		tab[i] = 0;
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
	int tab[] = {5,7,9,12,15};
	foo(SIZE,tab);
	showtab(SIZE,tab);
	return 0;
}
