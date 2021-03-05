#include <stdio.h>

int main() {
    int i, j, n, cont;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int mat[n][n];

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("DIAGONAL PRINCIPAL:\n");

    for(i = 0; i < n; i++) {
        printf("%d ", mat[i][i]);
            }

    cont = 0;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(mat[i][j] < 0) {
                cont++;
            }
        }
    }

    printf("\nQUANTIDADE DE NEGATIVOS = %d\n", cont);


    return 0;
}
