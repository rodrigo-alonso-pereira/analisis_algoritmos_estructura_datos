//inclusión de archivos de cabecera  
#include<stdio.h>

int main(){
	// declaración de variables
	int numero;
	printf("Ingrese un numero entero: \n");
	scanf("%d", &numero);

	// bifurca el flujo de ejecución
	if (numero % 2 == 0){
		// informa que el número es par
		printf("El numero %d es par \n", numero);
		}
	else{
		// informa que el número es impar
		printf("El numero %d es impar \n", numero);
		}
	return 0;
	}

