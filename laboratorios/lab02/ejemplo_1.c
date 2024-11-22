#include <stdio.h>


int calcula_cuadrado(int base){ 
	int resultado = 0, i = 0;
	while (i < base){
		resultado = resultado + base;
		i = i + 1;
		}
	return resultado;
	}
	
	
int main(){
	int b, cuadrado;
	printf("Ingrese un numero entero positivo: \n");
	scanf("%i", &b);
	cuadrado = calcula_cuadrado(b);
	printf("El cuadrado es: %i\n", cuadrado);
	return 0;
}

