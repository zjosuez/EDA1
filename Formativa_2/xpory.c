#include <stdio.h>

char troca(char str[])
{
    int k = 0;
    if (k == 80)
    {
        return 1;
    }
    if (str[k] != '\0')
    {

        if (str[k] == 'x')
        {
            str[k] == 'y';
            k++;
            return troca(str[k]);
        }
        if (str[k] == 'y')
        {
            str[k] == 'x';
            k++;
            return troca(str[k + 1]);
        }
        else
        {
            k++;
        }
    }
}

int main()
{
    char palavra[80];
    char result[80];
    scanf("%s", &palavra);

    result[80] = troca(palavra);
    printf("%s\n", result);
    return 0;
}