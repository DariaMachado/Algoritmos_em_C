#include <stdio.h>

int main() {
    int n, i;
    double x1, x2, x3, mediap;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Digite tres numeros:\n");
        scanf("%lf %lf %lf", &x1, &x2, &x3);

        mediap = (x1 * 2.0 + x2 * 3.0 + x3 * 5.0) / 10.0;

        printf("MEDIA = %.1lf\n", mediap);
    }

    return 0;
}
