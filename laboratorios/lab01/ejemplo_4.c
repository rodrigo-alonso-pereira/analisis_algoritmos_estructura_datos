//inclusi�n de archivos de cabecera  
#include<stdio.h>

int main(){
	// declaraci�n de variables
	int numero;
	printf("Ingrese un numero entero: \n");
	scanf("%d", &numero);

	// bifurca el flujo de ejecuci�n
	if (numero % 2 == 0){
		// informa que el n�mero es par
		printf("El numero %d es par \n", numero);
		}
	else{
		// informa que el n�mero es impar
		printf("El numero %d es impar \n", numero);
		}
	return 0;
	}

