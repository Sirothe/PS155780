#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int ** foo(int n)
{
    int **tab=malloc(n*sizeof(int*));
    for (int i=0;i<n;i++)
    {
        *(tab+i)=malloc((i+1)*sizeof(int));
    }
    return tab;
}
int main()
{
    int ** tab1=foo(4);
    **tab1=5;
    *(*(tab1+1)+1)=-10;
    *(*(tab1+2)+1)=15;
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<i+1;j++)
        {
            printf("[%d %d] = %d,",i,j,*(*(tab1+i)+j));
            printf("%p\n",*(tab1+i)+j);
        }
    }
    return 0;
}
