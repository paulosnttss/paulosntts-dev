#include <stdio.h>

int main() {
    int golsLuiz, golsVini, golsMartinelli, totalGols;

    
    printf("Quantos gols Luiz Henrique marcou? ");
    scanf("%d", &golsLuiz);

    printf("Quantos gols Vini Jr. marcou? ");
    scanf("%d", &golsVini);

    printf("Quantos gols Gabriel Martinelli marcou? ");
    scanf("%d", &golsMartinelli);

    totalGols = golsLuiz + golsVini + golsMartinelli;

    printf("\nTotal de gols do trio ofensivo: %d\n", totalGols);

    return 0;
}

