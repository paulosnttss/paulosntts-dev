#include <stdio.h>

int main() {
    int gols, soma = 0;
    int i = 1;

    while (i <= 10) {
        printf("Digite o total de gols do jogo %d: ", i);
        scanf("%d", &gols);
        soma += gols;
        i++;
    }

    printf("Total de gols nos 10 jogos: %d\n", soma);

    return 0;
}

