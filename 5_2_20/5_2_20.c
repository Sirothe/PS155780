#include <stdio.h>
#include <stdlib.h>
#include <math.h>
char *godzina(int godz,int min,int sec)
{
    char* wynik=malloc(9*sizeof(char));
    sprintf(wynik,"%02i:%02i:%02i",godz,min,sec);
    return wynik;
}
wchar_t *godzina2(int godz,int min,int sec)
{
    wchar_t *wynik=malloc(9*sizeof(char));
    swprintf(wynik,9,L"%02i:%02i:%02i",godz,min,sec);
    return wynik;
}
int main()
{
    printf("%s\n",godzina(14,51,23));
    wprintf(L"%s\n",godzina2(15,26,12));
}
