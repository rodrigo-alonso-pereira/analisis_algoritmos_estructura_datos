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

void lee_archivo(int *numeros, int n, char nombre[]){
	FILE *fp;
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


int main(int argc, char *argv[]){

	int i, n = atoi(argv[2]);
	int numeros[n];
	float tiempo_algoritmo = 0;
	clock_t clock_ini, clock_fin;
	
	lee_archivo(numeros, n, argv[1]);
	printf("Arreglo de entrada: \n");
	imprime(numeros, n);

	clock_ini = clock();
	seleccion(numeros, n);
	clock_fin = clock();
	tiempo_algoritmo = (float)((clock_fin - clock_ini) / CLOCKS_PER_SEC);
	
	printf("Arreglo ordenado: \n");
	imprime(numeros, n);
	printf("\nTiempo del algoritmo en segundos: %.2f  \n", tiempo_algoritmo); 

	
    return 0;

	}	

