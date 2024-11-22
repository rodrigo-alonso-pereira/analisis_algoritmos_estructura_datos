#include <stdio.h> 

int main(){

	int numero, primo, i;

	printf("Ingrese en numero: ");
	scanf("%d",&numero);

	primo = 1;
	i = 2;
	// determina si el número es primo mediante un ciclo que comparará el
	// número con todos los números menores a él hasta que se encuentre un divisor
	while ((i < numero) && (primo == 1)) { // si se encuentra un divisor, primo se vuelve 0
		if ((numero % i) == 0){ // si el residuo de la división es 0, el número no es primo
			primo = 0;
			}
		i++;
		}
	printf("Resultado: %d", primo);
	return 0;
	}

