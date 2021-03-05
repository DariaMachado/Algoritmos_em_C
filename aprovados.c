#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main() {
    int n, i;
    double media;

    printf("Quantos alunos serao digitados? ");
    scanf("%d", &n);

    double nota1[n], nota2[n];
    char nome[n] [50];

    for(i = 0; i < n; i++) {
        printf("Digite nome, primeira e segunda nota do %do aluno:\n", i + 1);
        limpar_entrada();
        ler_texto(nome[i], 50);
        scanf("%lf %lf", &nota1[i], &nota2[i]);
    }

    printf("Alunos aprovados:\n");

    for(i = 0; i < n; i++) {
        media = nota1[i] + nota2[i] / 2.0;

        if(media >= 6.0) {
            printf("%s\n", nome[i]);
        }
    }

    return 0;
}
