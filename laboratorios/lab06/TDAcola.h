#include <stdio.h> 
#include <stdlib.h>

/*------------- estructura de datos -------------*/
// TDA pila de números enteros


typedef struct nodo{
    int dato;
    struct nodo *siguiente;
    }nodo;

typedef struct{
 	nodo* frente;
    nodo* final;
    }cola;


/*------------- operaciones -------------*/

// crea_cola() crea y retorna una cola vacía
// orden de complejidad: O(1)
cola* crea_cola(void);

// es_cola_vacia(c) determina si la cola c está vacía
// orden de complejidad: O(1)
int es_cola_vacia(cola *c);

// encolar(c, d) inserta el dato d al final de la cola c
// orden de complejidad: O(1)
void encolar(cola* c, int d);

// desencolar(c) elimina el primer elemento de la cola c
// orden de complejidad: O(1)
void desencolar(cola* c);

// frente(c) retorna el primer elemento de la cola c
// orden de complejidad: O(1)
nodo* frente(cola* c);

// final(c) retorna el último elemento de la cola c
// orden de complejidad: O(1)
nodo* final(cola* c);