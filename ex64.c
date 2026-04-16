#include <stdio.h>

int main() {
    int i;
    float numero, soma;

    soma = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%f", &numero);
        if (numero < 40) {
            soma = soma + numero;
        }
    }

    printf("Soma dos valores menores que 40: %.2f\n", soma);

    return 0;
}
