#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double Zamiana(double *n)
{
    *n=pow(*n,3);
    return *n;
}
int main()
{
    double n=4;
    printf("%f",Zamiana(&n));
}

