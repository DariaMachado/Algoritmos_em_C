#include <stdio.h>

int main() {
    int qtd;
    double troco, dinheiro, preco, total, falta;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);

    printf("Quantidade comprada: ");
    scanf("%d", &qtd);

    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

   total = preco * qtd;

   if(total <= dinheiro) {
    troco = dinheiro - total;
    printf("TROCO = %.2lf\n", troco);
   }
   else {
    falta = total - dinheiro;
    printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS\n", falta);
   }

    return 0;
}
