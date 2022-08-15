#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

void mescla_listas(celula *l1, celula *l2, celula *l3)
{
    celula *p, *t, *r, *aux;

    for (p = l1->prox, t = l2->prox, r = l3; p != NULL && t != NULL; r = r->prox)
    {
        if (p->dado < t->dado)
        {
            aux = p->prox;
            r->prox = p;
            p = aux;
        }
        else
        {
            aux = t->prox;
            r->prox = t;
            t = aux;
        }
    }

    if (p == NULL)
        r->prox = t;

    else if (t == NULL)
        r->prox = p;
}