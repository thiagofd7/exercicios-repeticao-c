#include <stdio.h>

int main() {
    float valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    while (valor2 == 0) {
        printf("Digite o segundo valor: ");
        scanf("%f", &valor2);
    }

    printf("Resultado: %.2f\n", valor1 / valor2);

    return 0;
}
