#include <stdio.h>
#include <stdbool.h>
int main() {

    bool x = true;
    int a;
    int par = 0;
    int impar = 0;
    while(x) {

        scanf("%d", &a);

        if (a == 0) {
            printf("%d %d\n", par, impar);
            x = false;
        }

        if (a % 2 == 0) {
            par += a;
        } 
        else {
            impar += a;
        }
    }

    return 0;
}