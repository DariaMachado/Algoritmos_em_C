#include <stdio.h>

int main() {
    int n, i, posicao;
    double maior;

    printf("Quanto numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    for(i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    maior = vet[0];
    posicao = 0;

    for(i = 1; i < n; i++) {
        if(vet[i] > maior) {
            maior = vet[i];
            posicao = i;
        }
    }

    printf("\n\nMAIOR VALOR = %.1lf\n", maior);
    printf("POSICAO DO MAIOR VALOR = %d\n", posicao);

    return 0;
}
