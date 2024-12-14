#include <stdio.h>
#include <stdlib.h>


/*------------- estructura de datos -------------*/
// TDA grafo de números enteros

typedef struct{
	int cvertices;
	int **adyacencias;
	}grafo;


/*----------------- operaciones -----------------*/

// crea_grafo_vacio() retorna un grafo vacío representado como matriz de adyacencia
// orden de complejidad: O(n^2)
grafo* crea_grafo_vacio(int vertices);


// imprime_matriz_grafo() imprime matriz de adyacencia
// orden de complejidad: O(n^2)
void imprime_matriz_grafo(grafo *g);


// lee_grafo_nodirigido(archivo) lee desde un archivo un grafo no dirigido
// el formato del archivo registra las aristas
// orden de complejidad: O(|E|)
grafo* lee_grafo_nodirigido(char *nombre_archivo);


// libera memoria de un grafo
// orden de complejidad: O(n)
void libera_grafo(grafo *g);


// determina si un grafo es conexo
// orden de complejidad: O(n^2)
int es_conexo(grafo *g);


/*------------- Actividad 1 -------------*/
int obtiene_grado(grafo *g, int vertice);




/*------------- Actividad 2 -------------*/
int vertices_articulacion(grafo *g);





/*------------- Actividad 3 -------------*/


