#include <stdio.h>

int main() {
    int i, numAlunos;
    float nota, soma, media;

    printf("Digite o numero de alunos: ");
    scanf("%d", &numAlunos);

    soma = 0;

    for (i = 1; i <= numAlunos; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / numAlunos;
    printf("Media das notas: %.2f\n", media);

    return 0;
}
