#include <stdio.h>

int main() {
    int n, i, posicao, maisV;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char nome[n] [50];
    int idade[n];

    for(i = 0; i < n; i++) {
        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        scanf("%s", &nome[i][0]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
    }

    posicao = 0;
    maisV = idade[0];

    for(i = 1; i < n; i++) {
        if(idade[i] > maisV) {
            maisV = idade[i];
            posicao = i;
        }
    }

    printf("PESSOA MAIS VELHA: %s\n", nome[posicao]);

    return 0;
}
