#include <stdio.h>

int main() {
    int n;
    scanf("%d\n", &n);
    int vet[n];
    int aux = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
    for(int j = 1; j < n; j++) {
        if (vet[j] < vet[aux]) {
            aux = j;
        }
    }
    printf("%d\n", aux);

    

    return 0;
}