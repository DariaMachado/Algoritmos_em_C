#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, contF, contM;
    double maiorAlt, menorAlt, mediaF, somaF;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char sexo[n];
    double altura[n];

    for(i = 0; i < n; i++) {
        printf("Altura da %da pessoa: ", i + 1);
        scanf("%lf", &altura[i]);
        printf("Genero da %da pessoa: ", i + 1);
        fseek(stdin, 0, SEEK_END);
        scanf("%c", &sexo[i]);
    }

    maiorAlt = altura[0];
    menorAlt = altura[0];

    for(i = 0; i < n; i++) {
        if(altura[i] > maiorAlt) {
            maiorAlt = altura[i];
        }
        if(altura[i] < menorAlt) {
            menorAlt = altura[i];
        }
    }

    printf("Menor altura = %.2lf\n", menorAlt);
    printf("Maior altura = %.2lf\n", maiorAlt);

    somaF = 0;
    contF = 0;

    for(i = 0; i < n; i++) {
        if(sexo[i] == 'F') {
            somaF = somaF + altura[i];
            contF++;
        }
    }

    contM = n - contF;
    mediaF = (double) somaF / contF;

    printf("Media das alturas das mulheres = %.2lf\n", mediaF);
    printf("Numero de homens = %d\n", contM);

    return 0;
}
