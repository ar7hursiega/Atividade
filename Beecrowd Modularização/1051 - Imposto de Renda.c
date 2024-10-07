#include <stdio.h>

int main() {
    double salario, imposto = 0.0;

    scanf("%lf", &salario);

    if (salario <= 2000.00) {
        printf("Isento\n");
    } else if (salario <= 3000.00) {
        imposto += (salario - 2000.00) * 0.08;
        printf("R$ %.2f\n", imposto);
    } else if (salario <= 4500.00) {
        imposto += (3000.00 - 2000.00) * 0.08;
        imposto += (salario - 3000.00) * 0.18;
        printf("R$ %.2f\n", imposto);
    } else {
        imposto += (3000.00 - 2000.00) * 0.08;
        imposto += (4500.00 - 3000.00) * 0.18;
        imposto += (salario - 4500.00) * 0.28;
        printf("R$ %.2f\n", imposto);
    }

    return 0;
}
