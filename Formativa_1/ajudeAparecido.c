#include <stdio.h>

int main() {
    int val1, val2, val3, sum;
    scanf("%d%d%d\n", &val1, &val2, &val3);
    scanf("%d", &sum);

    if(sum == (val1 + val2 + val3)) {
        printf("Acertou\n");
    } else {
        printf("Errou\n");
    }

    return 0;
}