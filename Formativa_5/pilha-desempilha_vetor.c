#include <stdio.h>
#include <stdlib.h>

typedef struct pilha
{
    int *dados;
    int n, topo;
} pilha;

int desempilha(pilha *p, int *y)
{
    if (p->topo == NULL || p->dados == NULL)
        return 0;

    p->topo--;
    *y = p->dados[p->topo];
    return 1;
}