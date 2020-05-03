#include <stdio.h>
#include <stdlib.h>
void wytnijzw(char *nap1,char *nap2)
{
    int i,dl,j=0;
    int wys[256]={};
    for(i=0;nap2[i]!=0;i++)
        wys[nap2[i]]=1;
    for(i=0;nap1[i]!=0;i++)
        if(wys[nap1[i]]==0){
            if(j<i)
                nap1[j]=nap1[i];
            j++;
    }
    nap1[j]=0;
}
int main()
{
    char nap1[]="uzxckzxcryzxctynazxcpizxcs";
    char nap2[]="zxc";
    wytnijzw(nap1,nap2);
    printf("%s",nap1);
}
