#include <stdio.h>
#include <stdlib.h>
int ** tabwym(unsigned int n,unsigned int m)
{
	int ** roz=malloc(n*sizeof(int*));
	int i;
	for(i=0;i<n;i++)
	{
		roz[i]=malloc(m*sizeof(int));
	}
	return roz;
}
int main()
{
	**tab1=tabwym(3,5);
}
