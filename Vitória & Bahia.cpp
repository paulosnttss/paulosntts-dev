#include <stdio.h>

int main() {
    int contador = 0;
    int numero = 1;

    printf("Números das camisas a serem observados: ");

    while (contador < 5) {
        if (numero % 3 == 0) {
            printf("%d ", numero);
            contador++;
        }
        numero++;
    }

    printf("\n");

    return 0;
}

