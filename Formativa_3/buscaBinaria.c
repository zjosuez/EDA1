#include <stdio.h>

int buscaBinaria(int *v, int n, int x)
{
    int final = -1;
    int k = n;
    int val;
    int result = 0;

    while (final < k - 1)
    {
        val = (final + k) / 2;

        if (v[val] < x)
        {
            final = val;
            result = val + 1;
        }
        else
            k = val;
    }
    return result;
}

int main()
{
    int n, val, i, j, x;

    scanf("%d%d", &n, &val);

    int v[n];
    int aux[val];

    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);

    for (j = 0; j < val; j++)
    {
        scanf("%d", &x);
        aux[j] = buscaBinaria(v, n, x);
    }

    for (j = 0; j < val; j++)
    {
        printf("%d\n", aux[j]);
    }

    return 0;
}