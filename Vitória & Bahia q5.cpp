#include <stdio.h>

int main() {
    int camisa, menor, maior;
    int i = 1;

    printf("Digite o número da camisa do jogador 1: ");
    scanf("%d", &camisa);
    menor = maior = camisa; // Inicializa menor e maior com o primeiro valor

    while (i < 10) {
        i++;
        printf("Digite o número da camisa do jogador %d: ", i);
        scanf("%d", &camisa);

        if (camisa < menor) {
            menor = camisa;
        }
        if (camisa > maior) {
            maior = camisa;
        }
    }

    printf("Menor número de camisa: %d\n", menor);
    printf("Maior número de camisa: %d\n", maior);

    return 0;
}

