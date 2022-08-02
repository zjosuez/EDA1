#include <stdio.h>

int conta(long int x)
{
    int n = 0;
    if (x < 1)
    {
        return 0;
    }

    if (x % 10 == 7)
    {
        n++;
        return (n + (conta(x / 10)));
    }
    else
    {

        return (conta(x / 10));
    }
}

int main()
{
    long int x;
    scanf("%ld", &x);
    printf("%d\n", conta(x));

    return 0;
}