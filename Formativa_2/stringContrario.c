#include <stdio.h>

void troca(char *string, int n)
{
    if (n < 0)
    {
        printf("\n");
    }
    else
    {
        printf("%c", string[n]);
        troca(string, --n);
    }
}

int cp(char *string, int i)
{
    if (string[i] == '\0') {
        return i;
    } else{
        return cp(string, ++i);
    }
}

int main()
{
    char palavra[500];

    scanf("%s", palavra);
    int tamanho = cp(palavra, 0);
    troca(palavra, tamanho - 1);
    printf("\n");

    
    return 0;
}