#include <stdio.h>

int main() {
    int duracao, horas, minutos, segundos;

    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao);

    horas = duracao / 3600;
    minutos = duracao % 3600 / 60;
    segundos = (duracao % 3600) % 60;

    printf("%d : %d : %d\n", horas, minutos, segundos);

    return 0;
}
