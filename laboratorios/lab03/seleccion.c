#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void imprime(int *numeros, int n){
	int i = 0;
	while(i < n){
		printf("%i\n", numeros[i]);
		i++;			
		}
	}

void lee_archivo(int *numeros, int n, char nombre[]){ //Lee los numeros del archivo y los guarda en el arreglo
	FILE *fp; //Puntero al archivo
    fp = fopen(nombre, "r");
    if(fp == NULL){
    	printf("Error al abrir archivo %s\n", nombre);
        return;
		}

	int i = 0;
	while(i < n){
		fscanf(fp, "%i ", &numeros[i]);
		i++;			
		}
    fclose(fp);
	}


void intercambia(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
	}


void seleccion(int *numeros, int n){
    int i, j, indice;		
    for (i = 0; i < (n - 1); i++){
        indice = i;
        for (j = i + 1; j < n; j++){
            if (numeros[j] < numeros[indice])
                indice = j;
			}
        if(indice != i)
            intercambia(&numeros[indice], &numeros[i]);
		}
	}

int particion(int *numeros, int izq, int der) {
	int x = numeros[der];
	int i = izq - 1;
	int j;
	for (j = izq; j <= (der - 1); j++) {
		if (numeros[j] <= x) {
			i = i + 1;
			intercambia(&numeros[i], &numeros[j]);
		}
	}
	intercambia(&numeros[i+1], &numeros[der]);
	return (i + 1);
}

void quicksort(int *numeros, int izq, int der){
	int q;
	int medio = (der + izq) / 2;
	if (izq <= der) {
		intercambia(&numeros[medio], &numeros[der]);
		q = particion(numeros, izq, der);
		quicksort(numeros, izq, der - 1);
		quicksort(numeros, q + 1, der);
	}
}


int main(int argc, char *argv[]){ //ARGV[0] NOMBRE PROGRAMA ARGV[1] NOMBRE DEL ARCHIVO, ARGV[2] CANTIDAD DE NUMEROS

	int i, n = atoi(argv[2]);
	int numeros[n];
	float tiempo_algoritmo = 0;
	clock_t clock_ini, clock_fin;
	
	lee_archivo(numeros, n, argv[1]);
	printf("Arreglo de entrada: \n");
	//imprime(numeros, n);

	clock_ini = clock();
	//seleccion(numeros, n);
	for (int i = 0; i < 10; i++) {
		quicksort(numeros, 0, n-1);
	}

	clock_fin = clock();
	tiempo_algoritmo = (float)((clock_fin - clock_ini) / CLOCKS_PER_SEC);
	
	printf("Arreglo ordenado: \n");
	//imprime(numeros, n);
	printf("\nTiempo del algoritmo en segundos: %.2f  \n", tiempo_algoritmo);

	
    return 0;

	}	

