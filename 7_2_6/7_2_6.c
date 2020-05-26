#include <stdio.h>
#include <stdlib.h>
struct punktn
{
    int wymiar;
    float *tabn;
};
void wypisz(struct punktn parametr)
{
    printf("wymiar:%d\n",parametr.wymiar);
    for(int i=0;i<parametr.wymiar;i++)
    {
        printf("%f  ",parametr.tabn[i]);
    }
    printf("\n");
}
void wypisztab(struct punktn tablica[],int rozmiar)
{
    for(int i=0;i<rozmiar;i++)
    {
        wypisz(tablica[i]);
    }
    printf("Koniec tab\n");
}
void przepisz(struct punktn tab1[],struct punktn tab2[],int rozmiar)
{
    for(int i=0;i<rozmiar;i++)
    {
        tab2[i].wymiar=tab1[i].wymiar;
        tab2[i].tabn=malloc(tab1[i].wymiar*sizeof(float));
        for(int j=0;j<tab1[i].wymiar;j++)
        {
            tab2[i].tabn[j]=tab1[i].tabn[j];
        }
    }
}
int main()
{
    struct punktn p1={.wymiar=3};
    p1.tabn=malloc(3*sizeof(float));
    p1.tabn[0]=3.6;
    p1.tabn[1]=5.2;
    p1.tabn[2]=8.1;
    struct punktn p2={.wymiar=3};
    p2.tabn=malloc(3*sizeof(float));
    p2.tabn[0]=6,3;
    p2.tabn[1]=2.5;
    p2.tabn[2]=1.8;
    struct punktn p3={.wymiar=3};
    p3.tabn=malloc(3*sizeof(float));
    p3.tabn[0]=-6,3;
    p3.tabn[1]=22.5;
    p3.tabn[2]=16.8;
    struct punktn p4={.wymiar=3};
    p4.tabn=malloc(3*sizeof(float));
    p4.tabn[0]=63,3;
    p4.tabn[1]=25.5;
    p4.tabn[2]=11.8;
    struct punktn tabpkt[4]={p1,p2,p3,p4};
    struct punktn tabpkt2[4];
    wypisztab(tabpkt,4);
    przepisz(tabpkt,tabpkt2,4);
    wypisztab(tabpkt2,4);
    return 0;

}
