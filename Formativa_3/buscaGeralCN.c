#include <stdio.h>

int buscaBinaria(int *v, int n, int x)
{
    int final = -1;
    int k = n;
    int val;

    while (final < k - 1)
    {
        val = (final + k) / 2;

        if (v[val] == x)
            return val;

        else if (v[val] < x)
            final = val;

        else
            k = val;
    }
    if (v[k] == x)
        return k;
    else
        return -1;
}

void troca(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void recursao(int *v, int n, int i)
{
    if (i <= n - 1)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
            if (v[j] < v[min])
                min = j;

        troca(&v[min], &v[i]);

        recursao(v, n, i + 1);
    }
}

int main()
{
    int n, m, i, j, x;

    scanf("%d%d", &n, &m);

    int v[n];
    int save[n];
    int aux[m];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
        save[i] = v[i];
    }

    recursao(v, n, 0);

    for (j = 0; j < m; j++)
    {
        scanf("%d", &x);
        aux[j] = buscaBinaria(v, n, x);

        if (aux[j] != -1)
        {
            for (i = 0; i < n; i++)
            {
                if (save[i] == x)
                    aux[j] = i;
            }
        }
    }

    for (j = 0; j < m; j++)
        printf("%d\n", aux[j]);

    return 0;
}