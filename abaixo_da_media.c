#include <stdio.h>

int main() {
    int n, i;
    double media, soma;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &n);

    double vet[n];

    for(i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }
    soma = 0;

    for(i = 0; i < n; i++) {
        soma = soma + vet[i];
    }

    media = (double) soma / n;
    printf("\n\nMEDIA DO VETOR = %.3lf\n", media);
    printf("ELEMENTOS ABAIXO DA MEDIA:\n");

    for(i = 0; i < n; i++) {
        if(vet[i] < media) {
            printf("%.1lf\n", vet[i]);
        }
    }

    return 0;
}
