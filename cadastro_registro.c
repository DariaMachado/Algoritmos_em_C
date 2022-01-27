#include <stdio.h>
#include <stdlib.h>
#define size 2

/*Programa para registrar determinado numero de funcionários (no caso 2), e imprimir os registros*/

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

typedef struct{
    char nome[20];
    char sobrenome[30];
    char dtNascimento[11];
    char rg[10];
    char dtAdmissao[11];
    float salario;
} Empregado;

int main() {
    int i;
    Empregado empregado[size];

    for(i = 0; i < size; i++){
        printf("Digite o nome do funcionario: ");
        scanf("%s", empregado[i].nome);
        limpar_entrada();
        printf("Digite o sobrenome do empregado: ");
        scanf("%s", empregado[i].sobrenome);
        limpar_entrada();
        printf("Digite a data de nascimento: ");
        scanf("%s", empregado[i].dtNascimento);
        limpar_entrada();
        printf("Digite o numero do RG: ");
        scanf("%s", empregado[i].rg);
        limpar_entrada();
        printf("Insira a data de admissao: ");
        scanf("%s", empregado[i].dtAdmissao);
        limpar_entrada();
        printf("Insira o salario: ");
        scanf("%f", &empregado[i].salario);
        printf("\n");
    }

    for(i = 0; i < size; i++){
        printf("Nome: %s \nSobrenome: %s \nData de nascimento: %s \nRG: %s \nData admissao: %s \nSalario: %.2f\n\n", empregado[i].nome, empregado[i].sobrenome, empregado[i].dtNascimento, empregado[i].rg, empregado[i].dtAdmissao, empregado[i].salario);
    }


    return 0;
}

