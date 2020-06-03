#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element * next;
};
struct element * dodajw(struct element *lista,struct element * elem,int a)
{
    struct element * wskaznik=malloc(sizeof(struct element));
    wskaznik->i=a;
    if(elem==NULL)
    {
        wskaznik->next=lista;
        lista=wskaznik;
    }
    else
    {
        wskaznik->next=elem->next;
        elem->next=wskaznik;
    }
    return lista;
}
int main()
{

    struct element *proba=malloc(sizeof(struct element));
    proba->i=5;
    proba->next=malloc(sizeof(struct element));
    proba->next->i=7;
    proba->next->next=malloc(sizeof(struct element));
    proba->next->next->i=8;
    proba->next->next->next=NULL;
    dodajw(proba,NULL,9);
	return 0;
}
