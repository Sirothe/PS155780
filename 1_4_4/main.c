#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x;
    int suma;
    scanf("%d",x);
    for(int i=1;i<=x;i++){
        suma*=i;
    }
    printf("%d",suma);
    return 0;
}
