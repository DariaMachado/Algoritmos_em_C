#include <stdio.h>

int main() {
    char  escala;
    double tempc, tempf;

    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf("%c", &escala);

    if(escala == 'C') {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &tempc);

        tempf = 9.0 / 5.0 * tempc + 32.0;
        printf("Temperatura equivalente em Fahrenheit: %.2lf\n", tempf);
    }
    else {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &tempf);

        tempc = 5.0 / 9.0 * (tempf - 32.0);
        printf("Temperatura equivalente em Celsius: %.2lf\n", tempc);
    }

    return 0;
}
