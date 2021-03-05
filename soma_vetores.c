#include <stdio.h>

int main() {
    int n, i;

    printf("Quantos valores vai ter cada vetor? ");
    scanf("%d", &n);

    int A[n], B[n], C[n];

    printf("Digite os valores do vetor A:\n");

    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite os valores do vetor B:\n");

    for(i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }

    for(i = 0; i < n; i++) {
        C[i] = A[i] + B[i];
    }

    printf("VETOR RESULTANTE:\n");

    for(i = 0; i < n; i++) {
        printf("%d\n", C[i]);
    }

    return 0;
}
