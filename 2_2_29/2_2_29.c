#include <stdio.h>
#include <stdlib.h>
int dzielnikdwochlicz(int liczba1,int liczba2)
{
    if(liczba2!=0)
	{
    	return dzielnikdwochlicz(liczba2,liczba1%liczba2);
	}
    return liczba1;
}
 
int main()
{
    int liczba1;
    int liczba2;
    scanf("%i",&liczba1);
    scanf("%i",&liczba2);
    if(liczba1==liczba2)
    {
    	printf("%i",liczba1);
	}
	if(liczba2>liczba1)
	{
		int test=liczba1;
		liczba1=liczba2;
		liczba2=test;
	}
    printf("%i",dzielnikdwochlicz(liczba1,liczba2));
    return 0;
}
