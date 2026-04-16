#include <stdio.h>

int main() {
    int i, dentro, fora;
    float valor;

    dentro = 0;
    fora = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%f", &valor);

        if (valor >= 10 && valor <= 20) {
            dentro++;
        } else {
            fora++;
        }
    }

    printf("Valores no intervalo [10,20]: %d\n", dentro);
    printf("Valores fora do intervalo: %d\n", fora);

    return 0;
}
