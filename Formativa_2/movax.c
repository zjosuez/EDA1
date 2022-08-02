#include <stdio.h>
#include <stdlib.h>

void imprime(int n)
{

    if (n == 0)
        return;
    else
    {
        printf("x");
        n--;
    }
    imprime(n);
}

void moveX(char str[], char *str2, int j, int k, int n)
{

    if (str[j] != '\0')
    {
        if (str[j] != 'x')
        {
            str2[k] = str[j];
            k++;
        }
        if (str[j] == 'x')
            n++;
        j++;
        moveX(str, str2, j, k, n);
    }
    else
    {
        printf("%s", str2);
        imprime(n);
    }
}

int main()
{
    char str[101];
    char *str2;
    int j = 0, k = 0;
    int n = 0;

    scanf("%[^\n]", str);

    str2 = malloc(sizeof(char) * 101);

    moveX(str, str2, j, k, n);

    printf("\n");

    return 0;
}