#include <stdio.h>

int main() {
    int valor1, valor2, i, soma;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    soma = 0;

    for (i = valor1; i <= valor2; i++) {
        soma = soma + i;
    }

    printf("Soma dos inteiros entre %d e %d: %d\n", valor1, valor2, soma);

    return 0;
}
