#include <stdio.h>

int main() {
    double a, b, c, areaQ, areaTri, areaTrap;

    printf("Digite a medida A: ");
    scanf("%lf", &a);

    printf("Digite a medida B: ");
    scanf("%lf", &b);

    printf("Digite a medida C: ");
    scanf("%lf", &c);

    areaQ = a * a;
    areaTri = a * b / 2.0;
    areaTrap = ((a + b) * c) / 2.0;

    printf("AREA DO QUADRADO = %.4lf\n", areaQ);
    printf("AREA DO TRANGULO = %.4lf\n", areaTri);
    printf("AREA DO TRAPEZIO = %.4lf\n", areaTrap);

    return 0;
}
