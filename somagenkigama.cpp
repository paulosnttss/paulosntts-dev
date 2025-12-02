#include <stdio.h>

int fatorial (int n){
	if (n == 0){
	return 1;
}else{
	return n * fatorial (n- 1);
    }
                     }

int main(){
	int numero = 10;
	int resultado = fatorial(numero);
	
	printf("Fatorial de %d = %d\n", numero,resultado);
	
	return 0;
}
