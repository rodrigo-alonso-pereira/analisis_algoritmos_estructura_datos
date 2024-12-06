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
	} else{
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

nodo* tope(pila *p) {
	if(es_pila_vacia(p) == 0) {
		return p->tope;
	}
	return NULL;
}

void desapilar(pila* p) {
	if(es_pila_vacia(p) == 0) {
		nodo* ptr_aux = p->tope;
		p->tope = p->tope->siguiente;
		p->size = p->size - 1;
		free(ptr_aux);
	}
}

int busca_dato_pila(pila* p, int d) {
	pila* pila_aux = (pila*)malloc(sizeof(pila));
	int valor_tope;
	int encontrado = 0;
	while ((es_pila_vacia(p) == 0) && (!encontrado)) {
		valor_tope = tope(p)->dato;
		if (valor_tope = d) 
			encontrado = 1;
		apilar(pila_aux, valor_tope);
		desapilar(p);
	}
	while (es_pila_vacia(pila_aux) == 0) {
		apilar(p, tope(pila_aux)->dato);
		desapilar(pila_aux);
	}
	return encontrado;
	
}