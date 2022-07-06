#include <stdio.h>

int main()
{
    // Variaveis de entrada.
    int aeroporto[100];
    int A, V;
    int i, origem, destino, teste, maior;
    teste = 1;
    // Entrada do numero de aeroportos e numero de voos.
    scanf("%d %d", &A, &V);

    // Executa o laço enquanto as entradas não forem "0 0".
    while (A != 0 || V != 0)
    {

        // Preenche o vetor com 0.
        for (i = 0; i < A; i++)
        {
            aeroporto[i] = 0;
        }

        // Faz a contagem da frequencia de ocorrencia de um voo
        for (int i = 0; i < V; i++)
        {
            scanf("%d%d", &origem, &destino);
            aeroporto[origem - 1]++;
            aeroporto[destino - 1]++;
        }

        // Encontra o maior elemento
        maior = aeroporto[0];
        for (i = 1; i < A; i++)
        {
            if (aeroporto[i] > maior)
            {
                maior = aeroporto[i];
            }
        }

        // Imprime os casos de teste.
        printf("Teste %d\n", teste);
        for (i = 0; i < A; i++)
        {
            if (i == A -1) {
                printf("\n\n");
            }
            
            if (aeroporto[i] == maior)
            {
                printf("%d ", i + 1);
                teste++;
            }
        }
        // printf("\n");
        scanf("%d %d", &A, &V);

        // Pula duas linhas a cada caso de teste.
        // if (!(A == 0 && V == 0))
        // {
        //     printf("\n");
        // }
        // else
        // {
        //     printf("\n");
        // }
    }

    return 0;
}