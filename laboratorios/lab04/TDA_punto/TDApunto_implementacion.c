#include <math.h>
#include <stdlib.h>
#include "TDApunto.h"



punto* crea_punto(float x, float y){
	punto *nuevo_punto = malloc(sizeof(punto));
	nuevo_punto->x = x;
	nuevo_punto->y = y;
	return nuevo_punto;
	}


float calcula_distancia(punto *a, punto *b){ 
	float dx = (a->x) - (b->x); 
	float dy = (a->y) - (b->y);
	return sqrt(dx * dx + dy * dy);
	}	


float distancia_origen(punto *a){
	punto *origen = crea_punto(0.0, 0.0);
	return calcula_distancia(origen, a);
	}

punto* suma_puntos(punto* a, punto* b){
	float x = a->x + b->x;
	float y = a->y + b->y;
	punto* punto_suma = crea_punto(x, y);
	return punto_suma;
}