#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float pierwiastek(float a,float m)
{
	m=1/m;
	return pow(a,m);
}
float suma(float licz,float g)
{
	float suma;
	int i=0;
	float test1=licz;
	for(i;i<test1;i++)
	{
		suma+=pierwiastek(licz,g);
		licz--;
	}
	return suma;
}
int main()
{
	float liczba;
	float pier;
	scanf("%f",&liczba);
	scanf("%f",&pier);
	if(liczba>0&&pier>1)
	{
	printf("%f",suma(liczba,pier));
	}
	else
	{
		printf("Liczba jest ujemna lub pierwiastek jest mniejszy od 1");
		return -1;
	}
    return 0;
}
