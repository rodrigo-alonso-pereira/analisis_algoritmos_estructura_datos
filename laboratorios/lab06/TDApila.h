#include <stdio.h> 
#include <stdlib.h>

/*------------- estructura de datos -------------*/
// TDA pila de números enteros


typedef struct nodo{
    int dato;
    struct nodo *siguiente;
    }nodo;

typedef struct{
 	int size;
 	nodo *tope;
    }pila;


/*------------- operaciones -------------*/

// nueva_pila() retorna una pila vacía 
// orden de complejidad: O(1)
pila* nueva_pila(void);


// es_pila_vacia(p) determina si la pila p está vacía
// orden de complejidad: O(1)
int es_pila_vacia(pila *p);


/*------------- Actividad 1 -------------*/
// apilar(p, d) inserta el dato d al inicio de la pila p 
// orden de complejidad: O(1)
void apilar(pila *p, int d);


// tope(p) retorna la dirección del primer elemento de la lista p
// orden de complejidad: O(1)
nodo* tope(pila *p);


// desapilar(p) elimina el primer elemento de la pila p 
// orden de complejidad: O(1)
void desapilar(pila *p);





/*------------- Actividad 3 -------------*/

// imprime_pila(p) imprime por consola los elementos de la pila p
// orden de complejidad: O(n)
void imprime_pila(pila *p);


/*------------- Actividad 4 -------------*/
int busca_dato_pila(pila *p, int d);




