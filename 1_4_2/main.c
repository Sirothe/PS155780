#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m,t;
    scanf("%i%i", &n, &m);
    for (int i=1;i<=m;i++){
        printf("%i\n", n*i);
    }
    return 0;
}
