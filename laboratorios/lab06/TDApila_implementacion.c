#include <stdio.h>
#include <stdlib.h>
#include "TDApila.h"


pila* nueva_pila(void) {
    pila *p = (pila*)malloc(sizeof(pila));
	p->size = 0;
	p->tope = NULL;
	return p;
}


int es_pila_vacia(pila *p) {
	if(p->size == 0){
		return 1;
	    }
	else{
		return 0;
	    }
}

void apilar(pila *p, int d) {
	nodo* n = (nodo*)malloc(sizeof(nodo));
	n->dato = d;
	n->siguiente = p->tope;
	p->tope = n;
	p->size = p->size+1;
}
