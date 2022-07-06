#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int val = 0;
    scanf("%d", &n);

    if(n >= 0) {
        sum += 7;
    } 
    if(n >= 11 && n <= 30) {
        val = 1 * (n-10);
        sum += val;
    }
    if (n >= 31 && n <= 100) {
        val = 2 * (n-30) + 20;
        sum += val;
    }
    if( n>= 101) {
        val = 5 * (n - 100) + 160;
        sum += val;
    }

    printf("%d\n", sum);
    return 0;
}