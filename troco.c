#include <stdio.h>

int main() {
    double precoUnidade, troco, dinheiro;
    int quantidade;

    printf("Preco unitario do produto: ");
    scanf("%lf", &precoUnidade);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    troco = dinheiro - (precoUnidade * quantidade);

    printf("TROCO = %.2lf\n", troco);

    return 0;
}
