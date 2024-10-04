#include <stdio.h> 

int main(){

	int base, incremento, exponente, resultado, i, j;

	printf("Ingrese la base: ");
	scanf("%d",&base);

	printf("Ingrese el exponente: ");
	scanf("%d",&exponente);

	incremento = base;
	resultado = base;
	i = 1;
	while(i < exponente){
		j = 1;
		while(j < base){
			resultado = resultado + incremento;		
			j++;		
			}
		 
		incremento = resultado;
		i++;	
		}
	printf("Resultado: %d",incremento);
	return 0;
	}

