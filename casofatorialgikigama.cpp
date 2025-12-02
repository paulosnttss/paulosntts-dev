#include <stdio.h>

int fatorial(int n) {
   
    if (n == 0) {
        printf("Kamehameha! Chegamos ao fim da contagem!\n");
        return 1; // 0! = 1
    }

    printf("%d! ainda precisa de energia...\n", n);
    return n * fatorial(n - 1);
}

int main() {
    int num = 5;
    printf("Calculando %d!...\n", num);
    printf("Resultado: %d\n", fatorial(num));
    return 0;
}

