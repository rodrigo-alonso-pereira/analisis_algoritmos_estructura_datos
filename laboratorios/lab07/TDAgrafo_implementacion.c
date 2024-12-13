#include <stdio.h>
#include <stdlib.h>
#include "TDAgrafo.h"



/*----------------- implementación operaciones -----------------*/

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

