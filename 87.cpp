#include <stdio.h>

int main() {
    int faltas;
    float perdaPontos;

    printf("Quantas faltas Takefusa Kubo cometeu? ");
    scanf("%d", &faltas);

    perdaPontos = faltas * 0.5;

    printf("\nA Seleção Japonesa perdeu %.1f pontos devido às faltas de Kubo.\n", perdaPontos);

    return 0;
}
 		 
