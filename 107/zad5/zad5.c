#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct element
{
    int t;
    struct element * next;
};
int *funkcja(struct element * lista)
{
    if(lista->next==NULL)
        return NULL;
    lista=lista->next;
    while(lista!=NULL)
    {
        if((lista->t)%2==1)
        {
            return lista;
        }
    }
}
int main()
{
    struct element *proba=malloc(sizeof(struct element));
    proba->next=malloc(sizeof(struct element));
    proba->next->t=7;
    proba->next->next=malloc(sizeof(struct element));
    proba->next->next->t=8;
    proba->next->next->next=NULL;
    funkcja(proba);
}
