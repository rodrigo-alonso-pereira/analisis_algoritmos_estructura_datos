#include <stdio.h> 
#include <stdlib.h>

/*------------- estructura de datos -------------*/

typedef struct nodo{
    int dato;
    struct nodo *siguiente;
}nodo;

typedef struct{
 	int size;
 	nodo *tope;
}pila;

typedef struct{
 	nodo* frente;
    nodo* final;
}cola;

typedef struct{
    nodo *inicio;
}lista;

typedef struct{
	int cvertices;
	int **adyacencias;
}grafo;

/*------------- operaciones PILA -------------*/
pila* nueva_pila(void);
int es_pila_vacia(pila *p);
void apilar(pila *p, int d);
nodo* tope(pila *p);
void desapilar(pila *p);
int busca_dato_pila(pila *p, int d);
void imprime_pila(pila *p);
pila* semisuma(pila *p);

/*------------- operaciones COLA -------------*/
cola* crea_cola(void);
int es_cola_vacia(cola *c);
void encolar(cola* c, int d);
void desencolar(cola* c);
nodo* frente(cola* c);
nodo* final(cola* c);
void imprime_cola(cola* c);

/*------------- operaciones LISTA -------------*/
lista* nueva_lista();
int es_lista_vacia(lista *l);
void inserta_inicio(lista *l, int d);
void inserta_final(lista *l, int d);
void inserta_despues(lista *l, int d, int anterior);
void elimina_inicio(lista *l);
void elimina_final(lista *l);
void elimina_nodo(lista *l, int d);
void imprime_lista(lista *l);
void libera_lista(lista *l);
int cuenta_nodos(lista *l);
int busca_dato(lista *l, int d);
lista* union_listas(lista *l1, lista *l2);

/*------------- operaciones MEZCLA PILA Y COLA -------------*/
lista* algoritmo(pila *p, cola *c);

/*------------- operaciones GRAFOS -------------*/
grafo* crea_grafo_vacio(int vertices);
void imprime_matriz_grafo(grafo *g);
grafo* lee_grafo_nodirigido(char *nombre_archivo);
void libera_grafo(grafo *g);
int es_conexo(grafo *g);
int obtiene_grado(grafo *g, int vertice);
int vertices_articulacion(grafo *g);