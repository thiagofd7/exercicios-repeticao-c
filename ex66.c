#include <stdio.h>

int main() {
    int valor1, valor2, i, soma, menor, maior;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    soma = 0;

    if (valor1 < valor2) {
        menor = valor1;
        maior = valor2;
    } else {
        menor = valor2;
        maior = valor1;
    }

    for (i = menor; i <= maior; i++) {
        soma = soma + i;
    }

    printf("Soma dos inteiros entre %d e %d: %d\n", menor, maior, soma);

    return 0;
}
