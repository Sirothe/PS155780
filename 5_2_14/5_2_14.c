#include <stdio.h>
#include <stdlib.h>
void wypisz(char *nap)
{
    printf("%s\n",nap);
}
void wypisz2(wchar_t *nap2)
{
    wprintf(L"%s",nap2);
}
int main()
{
    char n1[]="napiswchar";
    wchar_t n2[]=L"napiswchart";
    wypisz(n1);
    wypisz2(n2);
}
