#include <stdio.h>

int main() {
    int i, contador = 0;

    printf("Cinco primeiros múltiplos de 3 maiores que 0:\n");

    for (i = 1; contador < 5; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
            contador++;
        }
    }

    printf("\n");

    return 0;
}

