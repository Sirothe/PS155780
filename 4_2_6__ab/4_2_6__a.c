#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void EXCHANGE(int n,int tab1[],int *tab2)
{
	int i;
	for(i=0; i<n; i++)
	{
		tab2[i] = tab1[i];
	}	
}
void showtab(int n,int tab[])
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%i\n", tab[i]);
	}
}
int main() 
{
	int tab1[] = {9, 10, 11, 12, 13};
	int tab2[] = {1, 2, 3, 4, 5};
	printf("tab2:\n");
	showtab(ROZMIAR,tab2);
	EXCHANGE(SIZE,tab1,tab2);
	printf("\ntab2:\n");
	showtab(SIZE,tab2);
	return 0;
}
