#include <stdio.h>
#include <stdlib.h>
char napis(char *tekst)
{
    int len=sizeof(tekst);
    for(int i=0;i<len;i++)
    {
        if(*(tekst+i)=='A');
            *(tekst+i)="#";
    }
    return tekst;
}
int main()
{
	char tekst[]="bbbAAAccc";
	printf("%s",tekst);
    char tekst2=napis(tekst);
    printf("%s",tekst2);
}
