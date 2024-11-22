#include<stdio.h> 

int main(){
	int elementos;
	printf("Ingrese la cantidad de elementos del arreglo: \n");
	scanf("%d", &elementos);
	int arreglo[elementos];
	// se asignan valores al arreglo
	for(int i = 0; i < elementos; i++){
		printf("Ingrese el valor a almacenar: \n");
		scanf("%d", &arreglo[i]);
		}	

	// se muestran por pantalla los valores
	for(int i = 0; i < elementos; i++){
		printf("El valor en la posicion %d es %d\n", i, arreglo[i]);
		}	
	return 0;
	}

