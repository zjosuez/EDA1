#include <stdio.h>

int main() {
int aeroporto[100];
int A, V;
int i, maior, origem, destino, teste;

teste = 1;
scanf("%d %d", &A, &V);
while(A != 0 || V != 0) {
    for(i = 0; i <A; i++) aeroporto[i] = 0;


    for(i = 0; i< V; i++) {
        scanf("%d%d", &origem, &destino);
        aeroporto[origem-1]++;
        aeroporto[destino-1]++;
    }


    maior = aeroporto[0];
    for(i = 1; i < A; i++)
        if(aeroporto[i] > maior) maior = aeroporto[i];

    printf("Teste %d\n", teste);
    for (i = 0; i < A; i++)
        if(aeroporto[i] == maior) printf("%d ", i+1);
    printf("\n\n");
    teste++;

    scanf("%d %d", &A, &V);
}


    return 0;
}