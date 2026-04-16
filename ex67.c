#include <stdio.h>

int main() {
    int i, cont;
    float soma, media;

    soma = 0;
    cont = 0;

    for (i = 15; i <= 100; i++) {
        soma = soma + i;
        cont++;
    }

    media = soma / cont;
    printf("Media aritmetica dos inteiros entre 15 e 100: %.2f\n", media);

    return 0;
}
