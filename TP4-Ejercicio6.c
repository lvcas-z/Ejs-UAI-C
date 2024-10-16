#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float tiempoAuto = 0 ;
	float ganador = 0;
	float ultimo = 0;
	int numeroAuto;
	int numeroAutoGanador;
	int numeroUltimoAuto;
	int cont=1;
	
	printf("Ingrese el numero del auto: %d\n",cont);
	scanf("%d",&numeroAuto);
	
	if (numeroAuto >= 999) {
            return 0;
    }
    
	printf("Ingrese su tiempo :\n");
	scanf("%f",&tiempoAuto);
	
	while(numeroAuto<999){
		if(cont==1){
			ganador=tiempoAuto;
			ultimo =tiempoAuto;
			
			numeroAutoGanador= numeroAuto;
			numeroUltimoAuto= numeroAuto;
		}
		else{
			if(tiempoAuto<ganador){
				ganador=tiempoAuto;
				numeroAutoGanador = numeroAuto;
			}
			if(tiempoAuto>ultimo){
				ultimo=tiempoAuto;
				numeroUltimoAuto = numeroAuto;
			}
		}
		cont++;
		printf("Ingrese el numero del auto: %d\n",cont);
		scanf("%d",&numeroAuto);
		
		if (numeroAuto >= 999) {
            break;
        }
        
		printf("Ingrese su tiempo :\n");
		scanf("%f",&tiempoAuto);
		
	}
	printf("El auto ganador es el: %d con un tiempo de: %.2f\n", numeroAutoGanador, ganador);
	printf("El ultimo auto es el: %d con un tiempo de: %.2f\n", numeroUltimoAuto, ultimo);

	
	
	return 0;
}
