#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

void divide_lista(celula *l, celula *l1, celula *l2)
{
    celula *p;

    for (p = l->prox; p != NULL; p = p->prox)
    {
        if ((p->dado % 2) != 0)
        {
            l1->prox = p;
            l1 = l1->prox;
        }
        else
        {
            l2->prox = p;
            l2 = l2->prox;
        }
        if (p->prox == NULL)
        {
            l1->prox = NULL;
            l2->prox = NULL;
        }
    }
}