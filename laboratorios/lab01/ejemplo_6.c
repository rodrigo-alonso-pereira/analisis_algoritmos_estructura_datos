#include <stdio.h> 

int main(){
	int numero, factorial;
	printf("Ingrese un número natural: ");
	scanf("%d",&numero);
	factorial = 1;
	while (numero > 1){
    	factorial *= numero;
    	numero -= 1;
		}
	printf("El factorial del numero ingresado es: %d",factorial);
	return 0;
	}


    
