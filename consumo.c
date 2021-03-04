#include <stdio.h>

int main() {
    int distancia;
    double combustivel, consumoMedio;

    printf("Distancia percorrida: ");
    scanf("%d", &distancia);

    printf("Combustivel gasto: ");
    scanf("%lf", &combustivel);

    consumoMedio = (double) distancia / combustivel;

    printf("Consumo medio = %.3lf\n", consumoMedio);

    return 0;
}
