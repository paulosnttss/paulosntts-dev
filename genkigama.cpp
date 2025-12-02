#include <stdio.h>


void genkiDama(int n) {
   
    if (n < 0) {
        return;
    }

    printf("%d\n", n);

    
    genkiDama(n - 1);
}

int main() {
    printf("Contagem regressiva para a Genki-Dama!\n");
    genkiDama(10);
    return 0;
}


