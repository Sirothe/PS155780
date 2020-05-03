#include <stdio.h>
#include <stdlib.h>
void wytnij(char *nap,int n,int m)
{
    int i,dl;
    for(dl=0;nap[dl]!=0;dl++);
    if(dl+1>m)
    {
        for(i=0;i+m<dl;i++)
            nap[n+i]=nap[i+m+1];
    }
    else
        if((n<dl)&&(dl+1<=m))
            nap[n]=0;
}
void wytnijwchart(wchar_t *napis, int n, int m)
{
    int i, j;
    for(i=0; napis[i]!=0; i++)
    {
        if (i+1>m)
        {
            for (j=0; j+m< i; j++)
            {
                napis[n+j]=napis[j+m+1];
            }
        }
        else if ((n<i) && (i+1<=m))
        {
            napis[n]=0;
        }
    }
}
int main()
{
    char n1[]="abbc";
    wchar_t n2[]=L"aletojestdlugitekst";
    wytnij(n1,1,2);
    wytnijwchart(n2,8,20);
    printf("%s\n",n1);
    wprintf(L"%s",n2);
}
