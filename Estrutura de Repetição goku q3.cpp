#include <stdio.h>

int main() {
    int energia = 0;

    while (energia <= 100000) {
        printf("%d\n", energia);
        energia += 1000;  // incremento de 1000 em 1000
    }

    return 0;
}

