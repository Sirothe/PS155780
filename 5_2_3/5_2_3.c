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
int porownaj(char*nap1,char*nap2)
{
    int x=1;
    if(dl(nap1)==dl(nap2))
    {
        for(int i=0;i<dl(nap1);i++)
        {
            if(nap1[i]!=nap2[i])
                x=0;
        }
        return x;
    }
}
int porownaj2(wchar_t *nap1,wchar_t *nap2)
{
    int d1= dl2(nap1);
    int d2= dl2(nap2);
    if (d1!=d2)
    {
        return 0;
    }
    for(int i=0;i<d1;i++)
    {
        if(nap1[i]!=nap2[i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char *napis="asdasd";
    char *napis2="asdasd";
    wchar_t napis3[]=L"asdasd";
    wchar_t napis4[]=L"asdasd";
    printf("%i\n",porownaj(napis,napis2));
    printf("%i\n",porownaj2(napis3,napis4));
}
