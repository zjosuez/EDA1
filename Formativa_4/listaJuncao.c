#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

//Recebe duas listas encadeadas, encabeçadas por l1 e l2, cujo conteúdo está ordenado em ordem não decrescente, e gere uma nova lista encabeçada por l3 que contém os elementos de l1 e l2 ordenados.
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