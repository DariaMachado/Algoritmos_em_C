#include <stdio.h>
#include <stdlib.h>
#define MAX 20
/*Programa desenvolvido para que o usuário insira e
remova elementos do início, meio e fim da lista, além de imprimi-la*/

void insere_inicio_lista(int *lista, int *size, int *valor);
void insere_meio_lista(int *lista, int *size, int *valor);
void insere_final_lista(int *lista, int *size, int *valor);
void remove_inicio_lista(int *lista, int *size);
void remove_meio_lista(int *lista, int *size);
void remove_final_lista(int *lista, int *size);
void imprime_lista(int *lista, int *size);

int main(){
    int lista[MAX];
    int size = 0;
    int opcao;
    int valor;

    do{
        printf("\nOperacoes:\n");
        printf("1 - Insere no incicio da lista\n");
        printf("2 - Insere no meio da lista\n");
        printf("3 - Insere no final da lista\n");
        printf("4 - Remove do inicio da lista\n");
        printf("5 - Remove do meio da lista\n");
        printf("6 - Remove do final da lista\n");
        printf("7 - Imprimir lista\n");
        printf("0 - Sair\n\n");

        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Informe um valor: ");
                scanf("%d", &valor);
                insere_inicio_lista(lista, &size, &valor);
                printf("Valor inserido.\n");
                break;
            case 2:
                printf("Informe um valor: ");
                scanf("%d", &valor);
                insere_meio_lista(lista, &size, &valor);
                printf("Valor inserido.\n");
                break;
            case 3:
                printf("Informe um valor: ");
                scanf("%d", &valor);
                insere_final_lista(lista, &size, &valor);
                printf("Valor inserido.\n");
                break;
            case 4:
                remove_inicio_lista(lista, &size);
                break;
            case 5:
                remove_meio_lista(lista, &size);
                break;
            case 6:
                remove_final_lista(lista, &size);
                break;
            case 7:
                imprime_lista(lista, &size);
                break;
            case 0:
                printf("\nMuito obrigado! Ate a proxima!\n");
            break;
            default:
                printf("\nValor invalido!\n");
        }

    }while(opcao != 0);


    return 0;
}

void insere_inicio_lista(int *lista, int *size, int *valor){
    int i;

    if(*size > 0){
        //Empurra todos os itens para direita
        for(i = *size - 1; i >= 0; i--){
            if(i + 1 < MAX){
                lista[i + 1] = lista[i];
            }
        }
        lista[0] = *valor;
    }
    else{
        lista[*size] = *valor;
    }
    *size += 1;

}

void insere_meio_lista(int *lista, int *size, int *valor){
    int i;

    if(*size > 0){
        int meio = *size / 2;

        for(i = *size - 1; i >= meio; i--){
            if(i + 1 < MAX){
                lista[i + 1] = lista[i];
            }
        }
        lista[meio] = *valor;
    }
    else{
        //Como a lista esta vazia, o meio pode ser o indice 0.
        lista[*size] = *valor;
    }
    *size += 1;

}
void insere_final_lista(int *lista, int *size, int *valor){
    if(*size < MAX){
        lista[*size] = *valor;
        *size += 1;
    }
}
void remove_inicio_lista(int *lista, int *size){
    int i;

    if(*size > 0){
        //Empurra todos os itens para a esquerda.
        for(i = 0; i < *size; i++){
            lista[i] = lista[i + 1];
        }
        *size -= 1;
    }
    else{
        printf("******************************************************\n");
        printf("Lista vazia!\n");
        printf("******************************************************\n");
    }

}
void remove_meio_lista(int *lista, int *size){
    int i;

    if(*size > 0){
        int meio = *size / 2;
        //Empurra todos os itens do fim para o meio.
        for(i = meio; i < *size; i++){
            lista[i] = lista[i + 1];
        }
        *size -= 1;
    }
    else{
        printf("******************************************************\n");
        printf("Lista vazia!\n");
        printf("******************************************************\n");
    }

}
void remove_final_lista(int *lista, int *size){
    if(*size > 0){
        //Limpa o valor do final setando em 0.
        lista[*size] = 0;
        *size -= 1;
    }
    else{
        printf("******************************************************\n");
        printf("Lista vazia!\n");
        printf("******************************************************\n");
    }
}
void imprime_lista(int *lista, int *size){
    int i;
    printf("******************************************************\n");
    if(*size > 0){
        printf("Tamanho: %d\n", *size);
        printf("Indices:\n");

        for(i = 0; i < *size; i++){
            putchar('   ');
            printf("%d", i);
            putchar('   ');
        }

        printf("\nValores:\n");

        for(i = 0; i < *size; i++){
            putchar('   ');
            printf("%d", lista[i]);
            putchar('   ');
        }

        printf("\n");
    }
    else{
        printf("Lista vazia!\n");
    }

    printf("******************************************************\n");

}
