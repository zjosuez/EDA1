#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

//Uma função que remove o elemento imediatamente seguinte do ponteiro p, com protótipo
int remove_depois(celula *p){
    celula *q;
    if(p->prox==NULL) EXIT_FAILURE;

    else if(p != NULL){
        q = p->prox;
        p->prox = q->prox;
        free(q);
    }
}

//Uma função que remove a primeira ocorrência de x da lista encadeada, cujo protótipo é
void remove_elemento(celula *le, int x){
    celula *p, *q;
    p = le;

    for(q = le->prox; q != NULL && q->dado != x; q = q->prox)
        p = q;

    if(q != NULL) {
        p->prox = q->prox;
        free(q);
    }
}

//Uma função que remove todas as ocorrências de x da lista encadeada, cujo protótipo é
void remove_todos_elementos(celula *le, int x){
    celula *p, *q, *r;
    p = le;

    for(q = le->prox; q != NULL; q = q->prox){
        if(q->dado == x){
            p->prox = q->prox;
            r = q;
            q = p;
            free(r);
        }
        p = q;
    }
}



