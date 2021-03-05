#include <stdio.h>

int main() {
    int n, i, num, den;
    double divisao;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Entre com o numerador: ");
        scanf("%d", &num);

        printf("Entre com o denominador: ");
        scanf("%d", &den);

        if(den == 0) {
            printf("DIVISAO IMPOSSIVEL\n");
        }
        else {
            divisao = (double) num / den;
            printf("DIVISAO = %.2lf\n", divisao);
        }
    }

    return 0;
}
