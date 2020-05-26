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
    //vvv minimalny przypadek testowy vvv
    int ** tab = tabwym(5,2);
    //vvv rzeczy dodatkowe dla sprawdzenia vvv
    **tab=1;
    int i,j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("[%d%d] = %d,", i, j, *(*(tab+i)+j));
            printf("    adres:%p\n", *(tab+i)+j);
        }
    }
    return 0;
}
