#include <stdio.h>
#include <stdlib.h>
#include "TDAcola.h"

int main (int argc, char const *argv[]) {
    
    cola* c = crea_cola();
    (es_cola_vacia(c) == 1) ? printf("La cola está vacía\n") : printf("La cola no está vacía\n");

    encolar(c, 5);
    encolar(c, 6);
    encolar(c, 7);
    encolar(c, 8);
    printf("Frente %d\n", frente(c)->dato);
    printf("Final %d\n", final(c)->dato);
    desencolar(c);
    printf("Frente %d\n", frente(c)->dato);
    printf("Final %d\n", final(c)->dato);
    desencolar(c);
    printf("Frente %d\n", frente(c)->dato);
    printf("Final %d\n", final(c)->dato);
    desencolar(c);

    (es_cola_vacia(c) == 1) ? printf("La cola está vacía\n") : printf("La cola no está vacía\n");

    printf("Frente %d\n", frente(c)->dato);
    printf("Final %d\n", final(c)->dato);

    

    return 0;
}