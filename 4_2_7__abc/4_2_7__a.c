#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void rewrite(int n, int tab1[], int tab2[], int *tab3)
{
	int i;
	for(i=0; i<n; i++)
	{
		tab3[i] = tab1[i] + tab2[i];
	}
}
void showtab(int n, int tab[])
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d\n", tab[i]);
	}
}
int main() 
{
	int tab1[] = {1, 2, 3, 4, 5};
	int tab2[] = {5, 4, 3, 2, 1};
	int tab3[] = {15, 16, 17, 18, 19};
	printf("tab3:\n");
	showtab(SIZE, tab3);
	rewrite(SIZE, tab1, tab2, tab3);
	printf("\ntab3:\n");
	showtab(SIZE, tab3);
	return 0;
}
