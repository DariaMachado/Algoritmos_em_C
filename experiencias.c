#include <stdio.h>

int main() {
    int n, i, qtd, contS, contC,contR, total;
    char cobaia;
    double perC, perR, perS;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &n);

    contC = 0;
    contR = 0;
    contS = 0;

    for(i = 0; i < n; i++) {
        printf("Quantidade de cobaias: ");
        scanf("%d", &qtd);
        printf("Tipo de cobaia: ");
        fseek(stdin,0,SEEK_END);
        scanf("%c", &cobaia);

        if(cobaia == 'C') {
            contC = contC + qtd;
        }
        else if(cobaia == 'R') {
            contR = contR + qtd;
        }
        else if(cobaia == 'S') {
            contS = contS + qtd;
        }
    }

    total = contC + contR + contS;
    perC = (double) contC / total * 100.0;
    perR = (double) contR / total * 100.0;
    perS = (double) contS / total * 100.0;

    printf("\nRELATORIO FINAL:\n");
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", contC);
    printf("Total de ratos: %d\n", contR);
    printf("Total de sapos: %d\n", contS);
    printf("Percentual de coelhos: %.2lf\n", perC);
    printf("Percentual de ratos: %.2lf\n", perR);
    printf("Percentual de sapos: %.2lf\n", perS);

    return 0;
}
