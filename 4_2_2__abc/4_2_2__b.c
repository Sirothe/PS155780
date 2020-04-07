#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int SUM(int n,int tab[])
{
	int i,wynik = 0;
	for(i=0;i<n;i++)
	{
		wynik+=tab[i];
	}
	return wynik;
}
int main() 
{
	int tab[] = {2, 4, 6, 8, 10};
	printf("%i",SUM(SIZE,tab));
	return 0;
}
