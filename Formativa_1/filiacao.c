#include <stdio.h>

struct tipoFiliacao
{
    char nome[80];
    char nomeMae[80];
    char nomePai[80];
};

struct tipoFiliacao separaLinhaCSV(char linha[240])
{
    struct tipoFiliacao tipo;
    int i = 0;
    int k = 0;
    int l = 0;
    int j = 0;
    int m = 0;
    char nome[80];
    char nomeMae[80];
    char nomePai[80];

    while(linha[i] != '\0')
    {
        if (linha[i] == ',')
        {
            k++;
        }
        if (k == 0)
        {
            tipo.nome[j] = linha[i];
            j++;
        }
        if (k == 1)
        {
            tipo.nome[j] = '\0';
            tipo.nomeMae[l] = linha[i+1];
            l++;
        }
        if (k == 2)
        {
            tipo.nomeMae[l-1] = '\0';
            tipo.nomePai[m] = linha[i+1];
            m++;
        }
        
        i++;
    }
    // printf("%s\n%s\n%s\n", tipo.nome, tipo.nomeMae, tipo.nomePai);
    return tipo;
}

// int main()
// {
//     separaLinhaCSV("Luiz Coelho ,Maria Carla Nascimento,Tomas Coelho ");
//     return 0;
// }