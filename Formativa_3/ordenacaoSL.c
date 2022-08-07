#include <stdio.h>

void ordena(int *v, int n)
{
    int i;
    int x;
    int k;
    for (i = 1; i < n; i++)
    {
        x = v[i];
        k = i - 1;

        while (k >= 0 && v[k] > x)
        {
            v[k + 1] = v[k];
            k = k - 1;
        }
        v[k + 1] = x;
    }
}