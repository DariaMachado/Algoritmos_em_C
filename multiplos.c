#include <stdio.h>

int main() {
    int x, y;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    if(x % y == 0 || y % x == 0) {
        printf("Sao multiplos\n");
    }
    else {
        printf("Nao sao multiplos\n");
    }

    return 0;
}
