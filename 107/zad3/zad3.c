#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int foo(int n,int m,int ** tab)
{
    int tab2[3];
    int x=0;
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==j)
            {
                tab2[x]=*(*tab+i)+j;
                x++;
            }
        }
    }
    for(int j=0;j<3;j++)
    {
        temp+=tab2[j];
    }
    return pow(temp,(1/3));
}
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
    int ** tab=tabwym(3,3);
    foo(3,3,tab);

}
