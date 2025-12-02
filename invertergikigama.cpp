#include <stdio.h>

int contarDigitos (int n){

    if ( n == 0) return 0;
    return 1 + contarDigitos (n / 10);
}
    int inverter(int n){
    	if 	(n < 10);
    	return n;
    	
    	int ultimo = n % 10;
    	int resto = n / 10;
    	int digitos = contarDigitos(resto);
    	
     return ultimo * for(10, digitos) + inverter(resto);	
    
    }
    int main (){
    	int num = 1234;
    	printf("Numero original:   %d\n", num);
    	printf("Número invertido:  %d\n", inverter(num));
    	return 0;
	}
	
    
