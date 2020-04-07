#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void rewrite(int n, int *tab1, int *tab2, int *tab3)
{
	int i, tmp1, tmp2, tmp3;
	for(i=0; i<n; i++)
	{
		tmp1 = tab1[i];
		tmp2 = tab2[i];
		tmp3 = tab3[i];
		if(tab1[i] >= tab2[i])
		{
			if(tab2[i] >= tab3[i])
			{
				tab1[i] = tmp1;
				tab2[i] = tmp2;
				tab3[i] = tmp3;	
			}
			else
			{
				if(tab3[i] >= tab1[i])
				{
					tab1[i] = tmp3;
					tab2[i] = tmp1;
					tab3[i] = tmp2;
				}
				else
				{
					tab1[i] = tmp1;
					tab2[i] = tmp3;
					tab3[i] = tmp2;	
				}
			}
		}
		else
		{
			if(tab1[i] >= tab3[i])
			{
				tab1[i] = tmp2;
				tab2[i] = tmp1;
				tab3[i] = tmp3;	
			}
			else
			{
				if(tab2[i] >= tab3[i])
				{
					tab1[i] = tmp2;
					tab2[i] = tmp3;
					tab3[i] = tmp1;	
				}
				else
				{
					tab1[i] = tmp3;
					tab2[i] = tmp2;
					tab3[i] = tmp1;	
				}
			}
		}
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
	int tab1[] = {1, 2, 3, 4, 5};
	int tab2[] = {5, 4, 3, 2, 1};
	int tab3[] = {15, 16, 17, 18, 19};
	printf("tab1:\n");
	showtab(SIZE, tab1);
	printf("\ntab2:\n");
	showtab(SIZE, tab2);
	printf("\ntab3:\n");
	showtab(SIZE, tab3);
	rewrite(SIZE, tab1, tab2, tab3);
	printf("\ntab1:\n");
	showtab(SIZE, tab1);
	printf("\ntab2:\n");
	showtab(SIZE, tab2);
	printf("\ntab3:\n");
	showtab(SIZE, tab3);
	return 0;
}
