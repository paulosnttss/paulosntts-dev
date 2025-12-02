#include <stdio.h>

void mostrarNomeRecursivo(char nome[], int vezes) {

   
    if (vezes == 0) {
        return;
    }

    printf("%s\n", nome);
    mostrarNomeRecursivo(nome, vezes - 1);
}

int main() {
    char nome[] = "Goku";
    int repeticoes = 5;

    mostrarNomeRecursivo(nome, repeticoes);

    return 0;
}


