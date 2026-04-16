#include <stdio.h>

int main() {
    int i, cont;

    cont = 0;
    i = 101;

    while (cont < 10) {
        printf("%d\n", i);
        i++;
        cont++;
    }

    return 0;
}
