#include <stdio.h>
#include <stdlib.h>
struct punkt10
{
    double pkt[10];
};
void foo(struct punkt10 tab[],struct punkt10 tab2[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        tab2[i]=tab[i];
    }
}
int main()
{
    struct punkt10 tab[]={{1},{2.2},{3.3},{4.4},{5.5},{6.6},{7.7},{8.8},{9.9},{10.10}};
    struct punkt10 tab2[]={{10.10},{9.9},{8.8},{7.7},{6.6},{5.5},{4.4},{3.3},{2.2},{1.1}};
    foo(tab,tab2,10);
    return 0;
}
