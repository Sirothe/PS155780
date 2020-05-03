#include <stdio.h>
#include <stdlib.h>
int dl(char *napis)
{
    int i=0;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}
int dl2(wchar_t *napis)
{
    int i=0;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}
int main()
{
    char*napis="asdasd";
    wchar_t*napis2=L"abcabcabc";
    printf("%i",dl(napis));
    printf("%i",dl2(napis2));
}
