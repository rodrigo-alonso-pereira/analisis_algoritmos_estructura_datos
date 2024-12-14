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

