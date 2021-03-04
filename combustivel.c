#include <stdio.h>

int main() {
    int codigo, contalc, contgas, contdie;

    contalc = 0;
    contgas = 0;
    contdie = 0;

    printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
    scanf("%d", &codigo);

    while(codigo != 4) {
        if(codigo == 1) {
            contalc++;
        }
        else if(codigo == 2) {
            contgas++;
        }
        else if(codigo == 3) {
            contdie++;
        }
        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &codigo);
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", contalc);
    printf("Gasolina: %d\n", contgas);
    printf("Diesel: %d\n", contdie);

    return 0;
}
