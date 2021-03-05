#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, i, j;

    printf("Quantas linhas vai ter cada matriz? ");
    scanf("%d", &m);

    printf("Quantas colunas vai ter cada matriz? ");
    scanf("%d", &n);

    int A[m][n], B[m][n], C[m][n];

    printf("Digite os valores da matriz A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os valores da matriz B:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("MATRIZ SOMA:\n");

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
