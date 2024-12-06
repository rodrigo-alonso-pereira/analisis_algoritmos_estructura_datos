#include <stdio.h>
#include <stdlib.h>
#include "TDApila.h"

int main(int argc, char const *argv[])
{

	pila *p = nueva_pila();	
	apilar(p, 5);
	apilar(p, 6);
	apilar(p, 7);
	apilar(p, 8);
	apilar(p, 9);
	nodo* n1 = tope(p);
	printf("Tope %d\n", n1->dato);
	//desapilar(p);
	//nodo* n2 = tope(p);
	//printf("Tope %d\n", n2->dato);
	int buscado = 1;
	(busca_dato_pila(p, buscado) == 1) ? printf("Encontrado valor %d en pila", buscado) : printf("No encontrado valor %d en pila", buscado);
	return 0;
}