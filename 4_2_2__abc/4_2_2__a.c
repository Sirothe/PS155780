#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int AVG(int n, int tab[])
{
	int i,wynik = 0;
	for(i=0; i<n; i++)
	{
		wynik += tab[i];
	}
	return wynik/n;	
}
int main() 
{
	int tab[] = {4,8,12,34,99};
	printf("%i",AVG(SIZE, tab));
	return 0;
}
