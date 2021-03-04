#include <stdio.h>

int main() {
    char nome[50];
    double pagamento, valorHora;
    int horasTrab;

    printf("Nome: ");
    gets(nome);

    printf("Valor por hora: ");
    scanf("%lf", &valorHora);

    printf("Horas trabalhadas: ");
    scanf("%d", &horasTrab);

    pagamento = (double) valorHora * horasTrab;

    printf("O pagamento para %s deve ser %.2lf\n", nome, pagamento);

    return 0;
}
