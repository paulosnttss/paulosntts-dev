#include <stdio.h>

int main() {
    int count = 0;
    int num = 2;     // primeiro número par
    int soma = 0;

    while (count < 50) {
        soma += num;
        num += 2;   // próximo par
        count++;
    }

    printf("A soma dos 50 primeiros números pares é: %d\n", soma);

    return 0;
}

