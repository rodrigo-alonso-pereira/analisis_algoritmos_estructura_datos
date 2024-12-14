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