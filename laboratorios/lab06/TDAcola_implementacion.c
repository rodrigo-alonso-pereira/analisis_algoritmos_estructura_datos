#include <stdlib.h>
#include <stdio.h>
#include "TDAcola.h"

cola* crea_cola() {
    cola* c = (cola*)malloc(sizeof(cola));
    c->frente = NULL;
    c->final = NULL;
    return c;
}

int es_cola_vacia(cola* c) {
    if (c->frente == NULL) {
        return 1;
    } else {
        return 0;
    }
}

void encolar(cola* c, int d) {
    nodo* n = (nodo*)malloc(sizeof(nodo));
    n->dato = d;
    n->siguiente = NULL;
    if (c->frente == NULL) {
        c->frente = n;
        c->final = n;
    } else {
        c->final->siguiente = n;
        c->final = n;
    }
}

void desencolar(cola* c) {
    if (es_cola_vacia(c) == 0) {
        nodo* ptr_aux = c->frente;
        c->frente = c->frente->siguiente;
        free(ptr_aux);
    } else {
        c->final = NULL;
    }
}

nodo* frente(cola* c) {
    if (es_cola_vacia(c) == 0) {
        return c->frente;
    }
    return NULL;
}

nodo* final(cola* c) {
    if (es_cola_vacia(c) == 0) {
        return c->final;
    }
    return NULL;
}


