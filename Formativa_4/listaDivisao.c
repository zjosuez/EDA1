#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

//Recebe uma lista encadeada encabeçada por l e a divide em duas listas l1 e l2 de forma que l1 contenha todos os numeros ímpares de l (na ordem em que aparecem em l) e l2 todos os números pares de l (na ordem em que aparecem em l).
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