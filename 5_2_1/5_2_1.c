#include <stdio.h>
#include <stdlib.h>
void foo(char napis[])
{
    napis[0]=0;
}
void foo2(wchar_t *napis)
{
    napis[0]=0;
}
int main()
{
    wchar_t tab2[]=L"asdasd";
    char tab[]="znaki";
    foo(tab);
    printf("%s",tab);
    foo2(tab2);
    wprintf(L"%s",tab2);
}
