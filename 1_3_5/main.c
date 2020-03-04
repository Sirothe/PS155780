#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float wynik;
    printf("Wybierz sposób obliczenia:\n");
    printf("1: oblicz pole z 3 bokow\n");
    printf("2: oblicz pole z dlugosci podstawy i wysokosci\n");
    scanf ("%f", &wynik);
    if (wynik==1){
        float x;
        float y;
        float z;
        printf("Podaj bok x\n");
        scanf ("%f", &x);
        printf("Podaj bok y\n");
        scanf ("%f", &y);
        printf("Podaj bok z\n");
        scanf ("%f", &z);
        float g=(x+y+z)/2;
        float wynik=sqrt(g*(g-x)*(g-y)*(g-z));
        printf("%f",wynik);
        }
    else if(wynik==2){
        float a;
        float h;
        printf("Podaj bok a\n");
        scanf ("%f", &a);
        printf("Podaj wysokosc h\n");
        scanf ("%f", &h);
        printf("%f",(a*h)/2);
        }
    return 0;
}
