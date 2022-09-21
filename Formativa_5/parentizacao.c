#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct celula
{
    char item;
    struct celula *prox;
} celula;

celula *cria_pilha()
{
    celula *topo = malloc(sizeof(celula));
    topo->prox = NULL;
    return topo;
}

void empilhar(celula *pilha, char valor)
{
    celula *ponteiro = malloc(sizeof(celula));
    ponteiro->item = valor;
    ponteiro->prox = pilha->prox;
    pilha->prox = ponteiro;
}

int desempilhar(celula *pilha)
{
    char desempilha;
    celula *lixo = pilha->prox;

    if (lixo == NULL)
    {
        return 0;
    }
    desempilha = lixo->item;
    pilha->prox = lixo->prox;
    return desempilha;
    free(lixo);
}

int main()
{

    int i = 0, balanceado = 0, abre = 0, objeto = 0, fecha = 0;
    char expM[500];
    celula *p = cria_pilha();
    scanf("%[^\n]", expM); // expressao

    for (i = 0; i < strlen(expM); i++)
    {
        if (expM[i] == '(')
        {
            empilhar(p, expM[i]);
            abre++;
        }

        if (expM[i] == '[')
        {
            empilhar(p, expM[i]);
            abre++;
        }

        if (expM[i] == '{')
        {
            empilhar(p, expM[i]);
            abre++;
        }

        if (expM[i] == ')')
        {
            fecha++;
            objeto = desempilhar(p);
            if (objeto == 0)
            {
                balanceado++;
            }
            if (objeto == 40)
            {
                balanceado++;
            }
        }

        if (expM[i] == ']')
        {
            fecha++;
            objeto = desempilhar(p);
            if (objeto == 0)
            {
                balanceado++;
            }
            if (objeto == 91)
            {
                balanceado++;
            }
        }

        if (expM[i] == '}')
        {
            fecha++;
            objeto = desempilhar(p);
            if (objeto == 0)
            {
                balanceado++;
            }
            if (objeto == 123)
            {
                balanceado++;
            }
        }
    }

    if (balanceado == abre && fecha == abre)
    {
        printf("sim\n");
    }
    else
    {
        printf("nao\n");
    }

    return 0;
}