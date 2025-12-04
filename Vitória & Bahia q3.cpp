#include <stdio.h>

int main() {
    int publico = 0;

    while (publico <= 100000) {
        printf("%d\n", publico);
        publico += 1000;
    }

    return 0;
}

