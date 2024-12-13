#include <stdio.h>
#include <stdlib.h>
#include "TDAgrafo.h"

int main(int argc, char *argv[]) {
	grafo *g;
	g = lee_grafo_nodirigido(argv[1]);
	if (g != NULL){
		printf("Matriz de adyacencia: \n\n");
		imprime_matriz_grafo(g);
		printf("\n============\n");
		}

	return 0;
	}



