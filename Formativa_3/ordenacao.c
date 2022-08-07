#include <stdio.h>
#include <stdlib.h>
void troca(int *val1, int *val2)
{
    int temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

int selecao(int val[], int n)
{
    int i, j, min;

    if (i < n-1) {
        if (j < n) {
            if (val[j] < val[min])
                min = j;

        troca(&val[min], &val[i]);
        j++;
        }
        i++;
        return selecao;
    }


    // for (i = 0; i < n - 1; i++)
    // {

    //     min = i;
    //     for (j = i + 1; j < n; j++)
    //         if (val[j] < val[min])
    //             min = j;

    //     troca(&val[min], &val[i]);
    // }
}

void printArray(int val[], int size)
{

    for (int i = 0; i < size; i++)
        printf("%d ", val[i]);
    printf("\n");
}

int main()
{
    int aux;
    int val[1000];
    int count = 0;
    while (scanf("%d", &aux) != EOF)
    {

        val[count] = aux;
        count++;
    }
    int n = count;

    selecao(val, n);
    printArray(val, n);

    return 0;
}