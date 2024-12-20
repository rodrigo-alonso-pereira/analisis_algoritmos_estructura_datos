#include <stdio.h>
#include <stdlib.h>
#include "TDAlista.h"

/*------------- operaciones -------------*/



lista* nueva_lista(){
    lista *l = (lista*)malloc(sizeof(lista));
    l->inicio = NULL;
    return l;
    }


int es_lista_vacia(lista *l){
    if (l->inicio == NULL)
        return 1;
    else
      return 0;
    }


void inserta_inicio(lista *l, int d){
    nodo *nuevo_nodo = (nodo*)malloc(sizeof(nodo));
    nuevo_nodo->dato = d;
    nuevo_nodo->siguiente = l->inicio;
    l->inicio = nuevo_nodo;
    }

void inserta_final(lista *l, int d){
    nodo *final = l->inicio;
    while (final->siguiente != NULL){
        final = final->siguiente;
    }
    nodo *nuevo_nodo = (nodo*)malloc(sizeof(nodo));
    nuevo_nodo->dato = d;
    nuevo_nodo->siguiente = NULL;
    final->siguiente = nuevo_nodo;
    }

void inserta_despues(lista *l, int d, int anterior) {
    nodo* ptr_anterior = l->inicio;
    while (ptr_anterior->dato != anterior) {
        ptr_anterior = ptr_anterior->siguiente;
    }
    nodo* nuevo_nodo = (nodo*)malloc(sizeof(nodo));
    nuevo_nodo->dato = d;
    nuevo_nodo->siguiente = ptr_anterior->siguiente;
    ptr_anterior->siguiente = nuevo_nodo;
}


void elimina_inicio(lista *l){
    nodo *aux;
    if(!es_lista_vacia(l)){
        aux = l->inicio;
        l->inicio = l->inicio->siguiente; //idem aux->siguiente
        free(aux);
        }
    }

void elimina_final(lista *l) {
    nodo* ptr_final = l->inicio;
    nodo* ptr_anterior = NULL;
    while (ptr_final->siguiente != NULL) {
        ptr_anterior = ptr_final;
        ptr_final = ptr_final->siguiente;
    }
    ptr_anterior->siguiente = NULL;
    free(ptr_final);
}

void elimina_nodo(lista* l, int d) {
    nodo* buscado = l->inicio;
    nodo* anterior_buscado = NULL;
    while (buscado->dato != d) {
        anterior_buscado = buscado;
        buscado = buscado->siguiente;
    }
    anterior_buscado->siguiente = buscado->siguiente;
    free(buscado);
}


void imprime_lista(lista *l){
    printf("Lista: ");
    if (!es_lista_vacia(l)){
        nodo *aux = l->inicio;
        while (aux != NULL){
            printf("%d ", aux->dato);
            aux = aux->siguiente;
            }
        printf("\n");
        }
    else
        printf("%c\n", 157);
    }


void libera_lista(lista *l){
    while (!es_lista_vacia(l)){
        elimina_inicio(l);
        }
    free(l);
	}

// ACTIVIDAD 2
int cuenta_nodos(lista *l) {
    int count = 0;
    nodo* ptr = l->inicio;
    while (ptr != NULL) {
        count += 1;
        ptr = ptr->siguiente;
    }
    return count;
}

// ACTIVIDAD 3
int busca_dato(lista *l, int d) {
    nodo* ptr = l->inicio;
    while (ptr != NULL) {
        if (ptr->dato == d) {
            return 1;
        }
        ptr = ptr->siguiente;
    }
    return 0;
}

/*
lista* invierte_orden(lista* l) {
    nodo* ptr = l->inicio;
    while (ptr != NULL) {
        nodo* ptr_siguiente = ptr->siguiente;
        //printf(ptr_siguiente->dato);
        nodo* ptr_siguiente2 = ptr->siguiente->siguiente;
        ptr_siguiente2 = ptr_siguiente;
        ptr = ptr_siguiente;
    }
    return l;
}
*/
	
