#include <stdio.h>
#include <stdlib.h>
#include "pep2.h"

/*
Escriba un algoritmo que reciba dos listas enlazadas simples y que retorne una tercera lista
que contenga la unión de ambas listas de entrada, es decir, una lista con los elementos que
se encuentran en cualquiera de las dos listas, sin repetición.
*/

int main (int argc, char const *argv[]) {

    //grafo *g;
	//g = lee_grafo_nodirigido(argv[1]);

    /*
    PROBLEMA 1 (20 puntos):
    Sea P una pila (tope el primero de la izquierda) y C una cola (frente el primero de la
    izquierda), inicializadas como: P = [2, 3, 4, 2, 2, 3, 4, 2] y C = [2, 1, 2, 3] ¿cuál es el estado
    de la lista L después de aplicar el algoritmo de la figura nro. 1?
    */

    pila *p1 = nueva_pila();
    apilar(p1, 2);
    apilar(p1, 4);
    apilar(p1, 3);
    apilar(p1, 2);
    apilar(p1, 2);
    apilar(p1, 4);
    apilar(p1, 3);
    apilar(p1, 2);
    imprime_pila(p1);

    cola *c1 = crea_cola();
    encolar(c1, 2);
    encolar(c1, 1);
    encolar(c1, 2);
    encolar(c1, 3);
    imprime_cola(c1);

    imprime_lista(algoritmo(p1, c1));
    printf("\n");

    /*
    PROBLEMA 2 (20 puntos):
    Escriba un algoritmo que reciba dos listas enlazadas simples y que retorne una tercera lista
    que contenga la unión de ambas listas de entrada, es decir, una lista con los elementos que
    se encuentran en cualquiera de las dos listas, sin repetición.
    */

    lista *l1 = nueva_lista();
    lista *l2 = nueva_lista();
    (es_lista_vacia(l1)) ? printf("Lista 1 vacia\n") : printf("Lista 1 no vacia\n");
    (es_lista_vacia(l2)) ? printf("Lista 2 vacia\n") : printf("Lista 2 no vacia\n");
    (busca_dato(l1, 5)) ? printf("Se encontro el elemento 5 en la lista 1\n") : printf("No se encontro el elemento 5 en la lista 1\n");
    
    inserta_final(l1, 5);
    inserta_final(l1, 11);
    inserta_final(l1, 5);
    inserta_final(l1, 6);

    inserta_final(l2, 55);
    inserta_final(l2, 11);

    imprime_lista(l1);
    imprime_lista(l2);

    imprime_lista(union_listas(l1, l2));

    /*
    PROBLEMA 3 (20 puntos):
    La operación semisuma de una pila de números enteros retorna una nueva pila donde el
    primer elemento (tope) es la suma del primer con el segundo elemento de la pila original.
    El segundo elemento de la nueva pila corresponde a la suma del tercer con el cuarto
    elemento de la pila original, y así sucesivamente. En caso de que la pila original tenga un
    número impar de elementos, el último elemento de la nueva pila será el doble del valor del
    último elemento de la pila original.
    Describa en pseudocódigo un algoritmo para la operación semisuma de una pila. Al
    finalizar la ejecución del algoritmo, la pila de entrada debe contener los mismos elementos
    y en el mismo orden que al comienzo del algoritmo. En la figura nro. 2 se muestra un
    ejemplo de la operación semisuma.
    */

    pila *p = nueva_pila();	
	//apilar(p, 20);
	apilar(p, 6);
	apilar(p, 22);
	apilar(p, 12);
	apilar(p, 38);
	apilar(p, 6);
	apilar(p, 8);
	apilar(p, 7);
	apilar(p, 5);

    printf("\nPila original: \n");
    imprime_pila(p);
    printf("Tamaño de la pila: %d\n", p->size);
    printf("\nPila semisuma: \n");
    imprime_pila(semisuma(p));
    printf("\nPila original post semisuma: \n");
    imprime_pila(p);

    /*
    PROBLEMA 4 (20 puntos):
    En un grafo simple, dos aristas son adyacentes si comparten el mismo vértice. En el grafo
    de la figura nro. 3 las aristas (2, 5) y (2, 3) son adyacentes.
    Escriba en pseudocódigo un algoritmo que reciba como entrada un grafo y una arista, y
    retorne una lista con las aristas adyacentes a la arista de entrada. Por ejemplo, para el grafo
    de la figura nro. 3 las aristas adyacentes de (3, 4) son (2, 3) y (4, 5).
    */

    
	/*if (g != NULL){
		printf("Matriz de adyacencia: \n\n");
		imprime_matriz_grafo(g);
		printf("\n============\n");
	}*/
   

}