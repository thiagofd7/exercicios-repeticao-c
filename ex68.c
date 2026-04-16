#include <stdio.h>

int main() {
    int i, totalMercadorias;
    float valor, somaTotal, media;

    printf("Digite o numero total de mercadorias no estoque: ");
    scanf("%d", &totalMercadorias);

    somaTotal = 0;

    for (i = 1; i <= totalMercadorias; i++) {
        printf("Digite o valor da mercadoria %d: ", i);
        scanf("%f", &valor);
        somaTotal = somaTotal + valor;
    }

    media = somaTotal / totalMercadorias;

    printf("Valor total em estoque: R$ %.2f\n", somaTotal);
    printf("Media de valor das mercadorias: R$ %.2f\n", media);

    return 0;
}
