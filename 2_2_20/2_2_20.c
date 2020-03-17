#include <stdio.h>
#include <stdlib.h>
int silnia(int n) 
{
	int i=0;
	int suma=1;
	for(i;i<n;i++)
	{
		suma*=n-i;
	}
	return suma;
}
int main() 
{
	int liczba;
	scanf("%i",&liczba);
	if(liczba>0)
	{
		printf("%i",silnia(liczba));	
	}
	return -1;
}
