#include <stdio.h>
#include <stdlib.h>
#include "pep2.h"

/*------------- operaciones PILA -------------*/
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
	pila* pila_aux = nueva_pila();
	int valor_tope;
	int encontrado = 0;
	while ((es_pila_vacia(p) == 0) && (!encontrado)) {
		valor_tope = tope(p)->dato;
		if (valor_tope == d) 
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

void imprime_pila(pila *p) {
	if(!es_pila_vacia(p)) {
		nodo* ptr = p->tope;
		printf("Pila: ");
		while(ptr != NULL) {
			printf("%d ", ptr->dato);
			ptr = ptr->siguiente;
		}
		printf("\n");
	} else {
		printf("Pila vacia\n");
	}
}

pila* semisuma(pila *p) {
	pila* pila_resultado = nueva_pila();
	pila* pila_aux = nueva_pila();
	nodo* ptr = p->tope;
	while (ptr != NULL) {
		int suma = 0;
		if (ptr->siguiente != NULL) {
			suma = ptr->dato + ptr->siguiente->dato;
			ptr = ptr->siguiente->siguiente;
		} else {
			suma = ptr->dato * 2;
			ptr = NULL;
		}
		apilar(pila_aux, suma);
	}
	while (!es_pila_vacia(pila_aux)) {
		apilar(pila_resultado, tope(pila_aux)->dato);
		desapilar(pila_aux);
	}
	free(pila_aux);
	return pila_resultado;
}

/*------------- operaciones COLA -------------*/
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

void imprime_cola(cola* c) {
	if (es_cola_vacia(c) == 0) {
		nodo* ptr = c->frente;
		printf("Cola: ");
		while (ptr != NULL) {
			printf("%d ", ptr->dato);
			ptr = ptr->siguiente;
		}
		printf("\n");
	} else {
		printf("Cola vacia\n");
	}
}

/*------------- operaciones LISTA -------------*/
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
	if (es_lista_vacia(l)){
		inserta_inicio(l, d);
		return;
	}
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

int cuenta_nodos(lista *l) {
    int count = 0;
    nodo* ptr = l->inicio;
    while (ptr != NULL) {
        count += 1;
        ptr = ptr->siguiente;
    }
    return count;
}

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

lista* union_listas(lista *l1, lista *l2) {
	lista* l3 = nueva_lista();
	nodo* ptr = l1->inicio;
	while (ptr != NULL) {
		if (!busca_dato(l3, ptr->dato)) {
			inserta_final(l3, ptr->dato);
		}
		ptr = ptr->siguiente;
	}
	ptr = l2->inicio;
	while (ptr != NULL) {
		if (!busca_dato(l3, ptr->dato)) {
			inserta_final(l3, ptr->dato);
		}
		ptr = ptr->siguiente;
	}
	return l3;
}

/*------------- operaciones MEZCLA PILA Y COLA -------------*/
lista* algoritmo(pila *p, cola *c) {
	lista* l = nueva_lista();
	int valor;
	while (!es_cola_vacia(c)) {
		valor = frente(c)->dato;
		desencolar(c);
		int s = 0;
		int i = 0;
		while (!es_pila_vacia(p) && i < valor) {
			s += tope(p)->dato;
			desapilar(p);
			i++;
		}
		inserta_inicio(l, s);
	}
	return l;
}

/*------------- operaciones GRAFOS -------------*/
grafo* crea_grafo_vacio(int vertices){
	grafo *g = (grafo*)malloc(sizeof(grafo));
	g->cvertices = vertices;
	g->adyacencias = (int**)malloc(vertices * sizeof(int*));
	int i, j;
	for (i = 0; i < vertices; i++){
		g->adyacencias[i] = (int*)malloc(vertices * sizeof(int));
		//Inicializa en cero
		for(j = 0; j < vertices; j++){
			g->adyacencias[i][j] = 0;
			}	
		}
	return g;
}


void imprime_matriz_grafo(grafo *g){
	int i, j;	
	for (i = 0; i < g->cvertices; i++){
		for (j = 0; j < g->cvertices; j++){
			printf("%d ", g->adyacencias[i][j]);
			}
		printf("\n");
		}
}


grafo* lee_grafo_nodirigido(char *nombre_archivo){
	FILE *pf;
	pf = fopen(nombre_archivo, "r");
	int n_vertices, m_aristas;
	int i,j,k;
	if (pf == NULL){
		printf("Error de archivo\n");
		return NULL;
	}
	else{
		fscanf(pf, "%d %d", &n_vertices,&m_aristas); 		
		grafo *G = crea_grafo_vacio(n_vertices);	
		for(k = 0; k < m_aristas; k++){
			fscanf(pf,"%d %d",&i, &j);
			G->adyacencias[i - 1][j - 1] = 1;
			G->adyacencias[j - 1][i - 1] = 1;
			}
		fclose(pf);
		return  G;	
	}
}


void libera_grafo(grafo *g){
    for(int i = 0; i < g->cvertices; i++){
        free(g->adyacencias[i]);
		}
	free(g);	
}


// función auxiliar de es_conexo()
void aux_es_conexo(grafo *g, int v, int* visitado){
    visitado[v] = 1;    
    for(int i = 0; i < g->cvertices; i++){
        if(g->adyacencias[v][i] == 1 && !visitado[i]){
            aux_es_conexo(g, i, visitado);
			}
		}
}


int es_conexo(grafo *g){
    int *visitado = (int*)calloc(g->cvertices, sizeof(int));
    aux_es_conexo(g, 0, visitado);
    for(int i = 0; i < g->cvertices; i++){
        if (!visitado[i]){
            free(visitado);
            return 0; 
			}
		}
    free(visitado);
    return 1;
}


int obtiene_grado(grafo *g, int vertice) {
	int grado = 0, i = 1;
	while (i <= g->cvertices) {
		if (g->adyacencias[vertice][i] > 0) {
			grado++;
		}
		i++;
	}
	return grado;
}

int vertices_articulacion(grafo *g){
	grafo* g_aux = g;
	//int i = 0;
	for (int i = 0; i < g_aux->cvertices; i++) {
		g_aux->adyacencias[i][0] = 0;
		g_aux->adyacencias[0][i] = 0;
	}
	imprime_matriz_grafo(g_aux);
	if (es_conexo(g_aux) == 1) {
		return 0;
	} else {
		return 1;
	}
}