#include <stdio.h>
#include <stdlib.h>
#include "TDApunto.h"


float flotante_aleatorio(){ 
	return 1.0 * rand()/RAND_MAX;
	}
	
	
int main(int argc, char *argv[]){
	int N = atoi(argv[1]);
	float distancia = atof(argv[2]);
	
	punto **a = (punto**)malloc(N * (sizeof(punto)));



	return 0;
	}

