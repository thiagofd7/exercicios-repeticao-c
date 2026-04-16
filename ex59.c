#include <stdio.h>

int main() {
    int i, cont;
    float valor;

    cont = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%f", &valor);
        if (valor < 0) {
            cont++;
        }
    }

    printf("Quantidade de valores negativos: %d\n", cont);

    return 0;
}
