//inclusión de archivos de cabecera 
#include<stdio.h>

int main(){
	// declaración de variables
	int numero_dias, numero_segundos;

	// ingreso de datos	
	printf("Ingrese el numero de dias a convertir:");
	scanf("%d", &numero_dias); //%d es el formato para leer un entero y &numero_dias es la dirección de memoria de la variable numero_dias

	// cálculo de segundos
	numero_segundos = numero_dias * 24 * 60 * 60; // 24 horas, 60 minutos, 60 segundos

	// salida de datos por consola
	printf("%d dias equivalen a %d segundos \n", numero_dias, numero_segundos);

	// retorno de la función main
	return 0;
	}

