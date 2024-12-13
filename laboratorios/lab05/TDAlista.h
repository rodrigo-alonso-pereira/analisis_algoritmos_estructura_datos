#include <stdio.h>
#include <stdlib.h>

/*------------- estructura de datos -------------*/
// TDA lista de números enteros

typedef struct nodo{
    int dato;
    struct nodo *siguiente;
    }nodo;


typedef struct{
    nodo *inicio;
    }lista;


/*------------- operaciones -------------*/

// nueva_lista() retorna una lista vacía 
// orden de complejidad: O(1)
lista* nueva_lista();

// es_lista_vacia(l) determina si la lista l está vacía
// orden de complejidad: O(1)
int es_lista_vacia(lista *l);

// inserta_inicio(l, d) inserta el dato d al inicio de la lista l 
// orden de complejidad: O(1)
void inserta_inicio(lista *l, int d);

// inserta_final(l, d) inserta el dato d al final de la lista l
// orden de complejidad: O(n)
void inserta_final(lista *l, int d);

// elimina_inicio(l) elimina el primer elemento de la lista l 
// orden de complejidad: O(1)
void elimina_inicio(lista *l);

// imprime_lista(l) imprime por consola los elementos de la lista l
// orden de complejidad: O(n)
void imprime_lista(lista *l);

// libera_lista(l) libera la memoria asignada a la lista l
// orden de complejidad: O(n)
void libera_lista(lista *l);

/*------------- actividad 2 -------------*/
int cuenta_nodos(lista *l);

/*------------- actividad 3 -------------*/
int busca_dato(lista *l, int d);

/*------------- actividad 4 -------------*/
//lista* invierte_orden(lista *l);