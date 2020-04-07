#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

double scalprod(int n, double tab1[], double tab2[])
{
	int i, wynik = 0;
	for(i=0; i<n; i++)
	{
		wynik += (tab1[i] * tab2[i]);
	}
	return wynik;
}
int main() 
{
	double tab1[] = {3, 7, 3, 7, 3};
	double tab2[] = {2, 1, 3, 7, 9};
	printf("%f", scalprod(SIZE, tab1, tab2));
	return 0;
}
