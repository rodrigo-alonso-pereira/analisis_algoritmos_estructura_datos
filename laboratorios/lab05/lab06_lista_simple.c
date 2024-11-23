#include <stdio.h>
#include <stdlib.h>
#include "TDAlista.h"

int main(){
    lista *l = nueva_lista();
    inserta_inicio(l, 2);
    inserta_inicio(l, 4);
    inserta_inicio(l, 7);
    inserta_inicio(l, 5);
    elimina_inicio(l);
    elimina_inicio(l);
    inserta_inicio(l, 3);
    imprime_lista(l);
    printf("La lista tiene %d elementos \n", cuenta_nodos(l));
    int d = 3;
    ( busca_dato(l, d) == 1) ? printf("Se encontro el elemento %d \n", d) : printf("No se encontro el elemento %d \n", d);
    invierte_orden(l);
    imprime_lista(l);
    return 0;
}