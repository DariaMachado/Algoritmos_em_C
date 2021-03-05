#include <stdio.h>

int main() {
    int n, i, contpares;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    int vet[n];

    for(i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    contpares = 0;
    printf("\nNUMEROS PARES:\n");

    for(i = 0; i < n; i++) {
        if(vet[i] % 2 == 0) {
            printf("%d ", vet[i]);
            contpares++;
        }
    }

    printf("\n\nQUANTIDADE DE PARES = %d\n", contpares);

    return 0;
}
