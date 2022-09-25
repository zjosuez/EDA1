#include <stdio.h>
void substitui(char *palavra, char char1, char char2)
{
    static int i = 0;

    if (!palavra[i])
    {
        return;
    }

    if (palavra[i] == char1)
    {
        palavra[i] = char2;
    }
    i++;
    substitui(palavra, char1, char2);
}

int main()
{

    char palavra[80];
    scanf("%s", palavra);
    substitui(palavra, 'x', 'y');
    printf("%s\n", palavra);

    return 0;
}