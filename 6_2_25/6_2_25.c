#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int **pom(int n, int m)
{
    int i;
    int ** tab = malloc(n*sizeof(int*));
    for (i=0; i<n; i++)
    {
       *(tab+i) =  malloc(m*sizeof(int));
    }
    return tab;
}
void foo(int **tab, int n, int m)
{
    int i, j, temp;
    for(i=0; i<n; i++)
    {
        for(j=0; j<floor(m/2); j++)
        {
            temp = tab[i][j];
            tab[i][j] = tab[j][i];
            tab[j][i] = temp;
        }
    }
}
int main()
{
    int **tab = pom(2,2);
    int i, j;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("[%d %d] = %d, ", i, j, *(*(tab+i)+j));
            printf("%p\n", *(tab+i)+j);
        }
    }
    foo(tab, 2,2);
    printf("\nPo:\n\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("[%d %d] = %d, ", i, j, *(*(tab+i)+j));
            printf("%p\n", *(tab+i)+j);
        }
    }
    return 0;
}
