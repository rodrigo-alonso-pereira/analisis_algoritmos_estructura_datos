#include <stdio.h>
#include <stdlib.h>
#include "TDAlista.h"

int main(){
    lista *l = nueva_lista();

    //ACTIVIDAD 1

    //1.- Insertar al inicio nodos en el siguiente orden: 5, 7, 4, 2
    inserta_inicio(l, 2);
    inserta_inicio(l, 4);
    inserta_inicio(l, 7);
    inserta_inicio(l, 5);

    //2.- Mostrar la lista resultante
    imprime_lista(l);

    //3.- Eliminar nodo al inicio, 2 veces
    elimina_inicio(l);
    elimina_inicio(l);

    //4.- Mostrar la lista resultante
    imprime_lista(l);

    //5.- Insertar al inicio nodo con valor 3
    inserta_inicio(l, 3);

    //6.- Mostrar la lista resultante
    imprime_lista(l);

    // ACTIVIDAD 2

    //1.- Implementar una funcion que devuelve el numero de elementos de la lista. La funcion debe volver 0 en caso de que lista esta vacia
    //2.- Evaluar la funcion creada, generando secuencia de llamadas desde la funcion main() para mostrar cuentos elementos tiene la siguiente lista
    printf("La lista tiene %d elementos \n", cuenta_nodos(l));

    // ACTIVIDAD 3
     
    //1.- Implementar una funcion que busque un dato en una lista. La funcion debe devolver 1 en caso de encontrar el dato y 0 en caso contrario:
    //2.- Evaluar la funcion creada, generando secuencia de llamadas desde la funcion main() para buscar los datos 7 y 14
    int d1 = 4;
    int d2 = 14;
    (busca_dato(l, d1) == 1) ? printf("Se encontro el elemento %d \n", d1) : printf("No se encontro el elemento %d \n", d1);
    (busca_dato(l, d2) == 1) ? printf("Se encontro el elemento %d \n", d2) : printf("No se encontro el elemento %d \n", d2);
    //invierte_orden(l);
    imprime_lista(l);
    return 0;
}