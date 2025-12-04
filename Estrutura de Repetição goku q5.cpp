#include <stdio.h>

int main() {
    int i;
    float num, maior, menor;

    printf("Digite o 1º número: ");
    scanf("%f", &num);

   
    maior = num;
    menor = num;

   
    for (i = 2; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%f", &num);

        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }

    printf("\nMaior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);

    return 0;
}

