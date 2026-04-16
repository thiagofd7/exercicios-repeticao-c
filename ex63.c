#include <stdio.h>

int main() {
    int i;
    float numero, soma;

    soma = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%f", &numero);
        soma = soma + numero;
    }

    printf("Soma total: %.2f\n", soma);

    return 0;
}
