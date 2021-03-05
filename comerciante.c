#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, lucroAbaixo, lucroEntre, lucroAcima;
    double somaCompra, somaVenda, lucroTotal;

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &n);

    double precoCompra[n], precoVenda[n], porcentagemLucro[n];
    char produto[n] [50];

    for(i = 0; i < n; i++) {
        printf("Produto %d:\n", i +1);
        printf("Nome: ");
        scanf("%s", &produto[i][0]);
        printf("Preco de compra: ");
        scanf("%lf", &precoCompra[i]);
        printf("Preco de venda: ");
        scanf("%lf", &precoVenda[i]);
    }

    for(i = 0; i < n; i++) {
        porcentagemLucro[i] = (precoVenda[i] - precoCompra[i]) / precoCompra[i] * 100.0;
    }

    lucroAbaixo = 0;
    lucroEntre = 0;
    lucroAcima = 0;

    for(i = 0; i < n; i++) {
        if(porcentagemLucro[i] < 10.0) {
            lucroAbaixo++;
        }
        else if(porcentagemLucro[i] <= 20.0) {
            lucroEntre++;
        }
        else {
            lucroAcima++;
        }
    }

    somaCompra = 0;
    somaVenda = 0;

    for(i = 0; i < n; i++) {
        somaCompra = somaCompra + precoCompra[i];
        somaVenda = somaVenda + precoVenda[i];
    }

    lucroTotal = somaVenda - somaCompra;

    printf("\nRELATORIO:\n");
    printf("Lucro abaixo de 10%%: %d\n", lucroAbaixo);
    printf("Lucro entre 10%% e 20%%: %d\n", lucroEntre);
    printf("Lucro acima de 20%%: %d\n", lucroAcima);
    printf("Valor total de compra: %.2lf\n", somaCompra);
    printf("Valor total de venda: %.2lf\n", somaVenda);
    printf("Lucro total: %.2lf\n", lucroTotal);

    return 0;
}
