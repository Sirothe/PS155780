#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void EXCHANGE(int n, int tab1[], int *tab2)
{
	int i,j=n-1;
	for(i=0; i<n; i++)
	{
			tab2[j] = tab1[i];
			j--;
	}	
}
void showtab(int n, int tab[])
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%i\n", tab[i]);
	}
}
int main() 
{
	int tab1[] = {2, 4, 6, 8, 10};
	int tab2[] = {1, 3, 5, 7, 9};
	printf("tab2:\n");
	showtab(SIZE, tab2);
	zamien(SIZE, tab1, tab2);
	printf("\ntab2:\n");
	showtab(SIZE, tab2);
	return 0;
}
