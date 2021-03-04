#include <stdio.h>

int main() {
    int horainicial, horafinal, duracao;

    printf("Hora inicial: ");
    scanf("%d", &horainicial);
    printf("Hora final: ");
    scanf("%d", &horafinal);

    if(horainicial >= horafinal) {
        duracao = 24 - horainicial + horafinal;
    }
    else {
        duracao = horafinal - horainicial;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}
