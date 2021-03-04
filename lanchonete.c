#include <stdio.h>

int main() {
    int codigo, qtd;
    double valor;

    printf("Codigo do produto comprado: ");
    scanf("%d", &codigo);
    printf("Quantidade comprada: ");
    scanf("%d", &qtd);

    if(codigo == 1) {
        valor = qtd * 5.00;
    }
    else if(codigo == 2) {
        valor = qtd * 3.50;
    }
    else if(codigo == 3) {
        valor = qtd * 4.80;
    }
    else if(codigo == 4) {
        valor = qtd * 8.90;
    }
    else if(codigo == 5) {
        valor = qtd * 7.32;
    }

    printf("Valor a pagar: R$ %.2lf\n", valor);

    return 0;
}
