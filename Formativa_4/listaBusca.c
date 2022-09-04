#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

//Uma função que procura pela primeira ocorrência do elemento x na lista encadeada e devolve um ponteiro para a célula que o contém.
//O protótipo desta função deve ser:
celula *busca(celula *le, int x)
{
    celula *p;

    for (p = le->prox; p != NULL && p->dado != x; p = p->prox)
        ;
    return p;
}

//Uma função que faz o mesmo que o item 3, mas recursiva, com protótipo
celula *busca_rec(celula *le, int x)
{
    if (le == NULL || le->dado == x)
        return le;

    else
        return busca_rec(le->prox, x);
}