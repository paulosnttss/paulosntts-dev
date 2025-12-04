#include <stdio.h>

int main() {
    int N, count = 0, num = 1;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    printf("Os %d primeiros números naturais ímpares são:\n", N);

    while (count < N) {
        printf("%d ", num);
        num += 2;   // próximo número ímpar
        count++;    // contabiliza um ímpar encontrado
    }

    printf("\n");

    return 0;
}
 
