#include <stdio.h>

int main() {
    int i;
    float valor, soma, media;

    soma = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%f", &valor);
        soma = soma + valor;
    }

    media = soma / 10;
    printf("Media aritmetica: %.2f\n", media);

    return 0;
}
