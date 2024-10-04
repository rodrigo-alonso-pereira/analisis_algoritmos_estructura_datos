#include <stdio.h> 

int main(){
	int numero_minutos, tarifa;
	printf("Ingrese el numero de minutos de permanencia:");
	scanf("%d",&numero_minutos);

	// determina la tarifa
	if (numero_minutos <= 30){
    	tarifa = numero_minutos * 35;
		}
	else if (numero_minutos <= 120){
        tarifa = (30 * 35) + (numero_minutos - 30) * 30;
    	}
		else if (numero_minutos <= 240){
            tarifa = (30 * 35) + (90 * 30) + (numero_minutos - 120) * 25;
			}
        	else{
            	tarifa = (30 * 35) + (90 * 30) + (120 * 25) + (numero_minutos - 240) * 20;
				}

	printf("El costo total es: %d pesos \n", tarifa);
	return 0;
	}

