#include <stdio.h>

int main() {
    float nota1, nota2, media;

    do {
        printf("Digite a nota da 1a avaliacao (0 a 10): ");
        scanf("%f", &nota1);
    } while (nota1 < 0 || nota1 > 10);

    do {
        printf("Digite a nota da 2a avaliacao (0 a 10): ");
        scanf("%f", &nota2);
    } while (nota2 < 0 && nota2 > 10);   /* erro proposital: && em vez de || */

    media = (nota1 + nota2) / 2;
    printf("Media do aluno: %.2f\n", media);

    return 0;
}
