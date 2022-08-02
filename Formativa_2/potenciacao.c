#include <stdio.h>
#include <stdlib.h>

float rec(int val1, int val2)
{
    if (val2 == 0)
    {
        return 1;
    }

    if (val2 < 0)
    {
        return val1 * rec(val1, val2 + 1);
    }

    else
    {
        return val1 * rec(val1, val2 - 1);
    }
}

int main()
{
    float val1 = 0, val2 = 0;
    scanf("%f %f", &val1, &val2);

    float resultado = rec(val1, val2);
    if (val1 == 0 && val2 == 0) {
        printf("indefinido\n");
        return 0;
    }
    if (val2 < 0)
    {
        resultado = 1 / resultado;
    }
    printf("%f\n", resultado);

    return 0;
}
