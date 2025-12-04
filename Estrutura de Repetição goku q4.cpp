#include <stdio.h>

int main() {
    int i;
    float valor, soma = 0;

    printf("Digite 10 valores:\n");

    for (i = 1; i <= 10; i++) {
        printf("Valor %d: ", i);
        scanf("%f", &valor);
        soma += valor;
    }

    printf("\nA soma dos 10 valores é: %.2f\n", soma);

    return 0;
}

