#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*------------- actividad 1 implementar algoritmo iterativo -------------*/
int lucas_iterativo(int a) {
	int lucas0 = 2;
	int lucas1 = 1;
	if (a == 0) {
		return lucas0;
	}
	if (a == 1) {
		return lucas1;
	}
	for (int i = a; i > 1; i--) {
		int lucas = lucas0 + lucas1;
		lucas0 = lucas1;
		lucas1 = lucas;
	}
	return lucas1;
}

/*------------- actividad 2 implementar algoritmo recursivo -------------*/
int lucas_recursivo(int a) {
	if (a == 0) {
		return 2;
	}
	if (a == 1) {
		return 1;
	}
	return lucas_recursivo(a - 1) + lucas_recursivo(a - 2);
}



//int main(int argc, char *argv[]){ // argv[] son los argumentos que se pasan por consola y que se almacenan en un arreglo de caracteres
int main(){ // argv[] son los argumentos que se pasan por consola y que se almacenan en un arreglo de caracteres

	int num = 45;
	int resultado_iterativo = 0;
	int resultado_recursivo = 0;
	clock_t ciniIt, cfinIt, ciniRe, cfinRe; //clock_t es un tipo de dato que se utiliza para medir el tiempo de ejecución de un programa
	
	//num = atoi(argv[1]);

	/*
	ciniIt = clock();
	for (int i = 0; i < 500000; i++) {
		resultado_iterativo = lucas_iterativo(num);
	}
	cfinIt = clock();
	*/

	ciniRe = clock();
	resultado_recursivo = lucas_recursivo(num);
	cfinRe = clock();

	printf("clock_t iterativo\n");
	printf("Resultado Iterativo %d : %d \n", num, resultado_iterativo);
	printf("clock_t iterativo:  %f \n", (double)(cfinIt-ciniIt) / CLOCKS_PER_SEC);
	printf("\n-------------------\n\n");
	printf("clock_t recursivo\n");
	printf("Resultado Recursivo %d : %d \n", num, resultado_recursivo);
	printf("clock_t recursivo:  %f\n", (double)(cfinRe-ciniRe) / CLOCKS_PER_SEC);
}

