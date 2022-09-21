#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

typedef struct fila
{
    celula *ini;
    celula *fim;
} fila;

fila *inicializa()
{
    fila *f = (fila *)malloc(sizeof(fila));
    f->ini = NULL;
    f->fim = NULL;
    return f;
}

void *enfileira(fila *p, int carta)
{
    celula *novo = (celula *)malloc(sizeof(celula));

    novo->dado = carta;
    novo->prox = NULL;

    if (p->ini == NULL)
    {
        p->ini = novo;
        p->fim = novo;
    }
    else
    {
        p->fim->prox = novo;
        p->fim = novo;
    }
}

int desenfileira(fila *p)
{
    int carta;
    celula *le;

    le = p->ini;
    carta = le->dado;
    p->ini = le->prox;

    if (p->ini == NULL)
        p->fim = NULL;

    free(le);

    return carta;
}

int main()
{
    int n, i, carta, cont;
    fila *f;

    f = inicializa();

    scanf("%d", &n);
    cont = n;

    for (i = 1; i <= n; i++)
        enfileira(f, i);

    printf("Cartas descartadas:");

    while (cont != 1)
    {
        printf(" %d", desenfileira(f));
        enfileira(f, desenfileira(f));

        if (cont != 2)
            printf(",");

        cont--;
    }

    if (f->ini != NULL)
        printf("\nCarta restante: %d\n", desenfileira(f));

    return 0;
}
