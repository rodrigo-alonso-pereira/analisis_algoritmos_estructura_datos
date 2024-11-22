#include <stdio.h>
#include "TDApunto.h"


int main(void){
	
	punto* punto1 = crea_punto(1, 2);
    punto* punto2 = crea_punto(2, 3);
    float distancia = calcula_distancia(punto1, punto2);
    printf("La distancia es %f\n", distancia);
    punto* punto3 = suma_puntos(punto1, punto2);
    printf("Nuevo punto sumado es (%f,%f)", punto3->x, punto3->y);
	
    return 0;
	}
