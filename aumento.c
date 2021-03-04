#include <stdio.h>

int main() {
    double salario, novoSalario, aumento;
    int porcentagem;

    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salario);

    if(salario <= 1000.0) {
        porcentagem = 20;
    }
    else if(salario <= 3000.0) {
        porcentagem = 15;
    }
    else if(salario <= 8000.0) {
        porcentagem = 10;
    }
    else if(salario > 8000.0) {
        porcentagem = 5;
    }

    aumento = salario * porcentagem / 100.0;
    novoSalario = salario + aumento;

    printf("Novo salario = %.2lf\n", novoSalario);
    printf("Aumento = %.2lf\n", aumento);
    printf("Porcentagem = %d %%\n", porcentagem);

    return 0;
}
