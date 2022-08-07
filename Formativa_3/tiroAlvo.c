#include <stdio.h>

long long shot[100010];

int busca(long long distance, long long aux)
{
    long long inicio = 1;
    long long final = aux;
    long long meio;

    if (distance > shot[final])
        return 0;

    while (inicio < final)
    {
        meio = (inicio + final) / 2;

        if (shot[meio] >= distance)
            final = meio;
        else
            inicio = meio + 1;
    }

    return aux + 1 - final;
}

int main()
{
    long long aux, T;
    int i;
    long long x, y;
    long long pontos = 0, R;

    scanf("%lld %lld", &aux, &T);

    for (i = 1; i <= aux; i++)
    {
        scanf("%lld", &R);
        shot[i] = R * R;
    }

    for (i = 1; i <= T; i++)
    {
        scanf("%lld %lld", &x, &y);
        pontos += busca((x * x + y * y), aux);
    }

    printf("%lld\n", pontos);

    return 0;
}