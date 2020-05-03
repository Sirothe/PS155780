#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void sklej(char *nap1,char *nap2,char *nap3)
{
    int i,j;
    for(i=0;nap1[i]!=0;i++)
    {
        nap3[i]=nap1[i];
    }
    for(j=0;nap2[j]!=0;j++)
    {
        nap3[i+j]=nap2[j];
    }
    nap3[i+j]=0;
}
void sklej2(wchar_t *nap1,wchar_t *nap2,wchar_t *nap3)
{
    int i,j;
    for(i=0;nap1[i]!=0;i++)
    {
        nap3[i]=nap1[i];
    }
    for(j=0;nap2[j]!=0;j++)
    {
        nap3[i+j]=nap2[j];
    }
    nap3[i+j]=0;
}
int main()
{
    char cz1[]="Ala m";
    char cz2[]="a kota.";
    char cz3[20];
    wchar_t cz4[]=L"Ala m";
    wchar_t cz5[]=L"a kota.";
    wchar_t cz6[20];
    sklej(cz1,cz2,cz3);
    sklej2(cz4,cz5,cz6);
    printf("%s\n",cz3);
    printf("%s",cz3);
}
