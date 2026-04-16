#include <stdio.h>

int main() {
    float valor, somaTotal, media;
    int cont;
    char resposta;

    somaTotal = 0;
    cont = 0;

    do {
        printf("Digite o valor da mercadoria: ");
        scanf("%f", &valor);
        somaTotal = somaTotal + valor;
        cont++;

        printf("MAIS MERCADORIAS (S/N)? ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    media = somaTotal / cont;

    printf("Valor total em estoque: R$ %.2f\n", somaTotal);
    printf("Media de valor das mercadorias: R$ %.2f\n", media);  /* erro proposital: esqueci de printar cont */

    return 0;
}
