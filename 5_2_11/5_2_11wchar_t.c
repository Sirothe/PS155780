#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool czywy(wchar_t x,wchar_t *nap1)
{
    int i;
    for(i=0;nap1[i]!=0;i++)
    {
        if(nap1[i]==x)
            return true;
    }
    return false;
}
void wytnijzw(wchar_t *nap1,wchar_t *nap2)
{
    int i,j;
    for(i=0,j=0;nap1[i]!=0;i++)
        if(!czywy(nap1[i],nap2))
    {
        if(j<i)
            nap1[j]=nap1[i];
        j++;
    }
    nap1[j]=0;
}
int main()
{
    wchar_t nap1[]=L"uzxckzxcryzxctynazxcpizxcs";
    wchar_t nap2[]=L"zxc";
    wytnijzw(nap1,nap2);
    wprintf(L"%s",nap1);
}
