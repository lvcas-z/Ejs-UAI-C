#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	const int cantAnalistas = 2;
	const int cantProyectos = 3;
	
	
	char nombre[cantAnalistas][50];
	int proyectosxAnalista[cantAnalistas][cantProyectos];
	
	int numeroProyecto;
	
	int horaRealizada;
	
	int horaxAnalista [cantAnalistas];
	int horaxProyecto [cantProyectos];
	int sueldoAnalista[cantAnalistas];
	int cantAnalistaMenos5Horas = 0;
	int i,j;
	
	
	for(i=0;i<cantAnalistas;i++){
		printf("-----Analista----- %d\n", i + 1);
        printf("Ingrese Nombre: ");
        scanf("%s", nombre[i]);
        	for (j=0;j<cantProyectos;j++){
        		
				printf("Ingrese Numero de Proyecto (1-15), O para salir: ");
        		scanf("%d", &numeroProyecto);
        	
				proyectosxAnalista[i][j]= numeroProyecto;
				
        		printf("Ingrese horas realizadas: \n");
        		scanf("%d", &horaRealizada);
        		horaxAnalista[i] += horaRealizada;
				horaxProyecto[j] += horaRealizada;
				if(horaRealizada<5){
					cantAnalistaMenos5Horas ++;
				} 
				printf("Ingrese sueldo del Analista: \n");
				scanf("%d",&sueldoAnalista[i]);

			}
	}
	
	
	//Resultados
	
	printf("\n");
	printf("Cantidad de horas trabajadas por cada Analista: \n");
	printf("\n");
	for(i=0;i<cantAnalistas;i++){
		printf("Analista :  %s  || Horas trabajadas : %d \n", nombre[i] , horaxAnalista[i]);
	}
	
	printf("\n");
	printf("\n");
	printf("Cantidad de horas trabajadas en cada Proyecto: \n");
	printf("\n");
	for(i=0;i<cantProyectos;i++){
		printf(" Horas trabajadas en el proyecto %d : %d \n",i+1,horaxProyecto[i]);
	}
	
	printf("\n");
	printf("\n");
	printf("Cantidad de analistas que trabajaron menos de 5 horas en cada Proyecto: \n");
	printf("\n");
	printf("%d \n",cantAnalistaMenos5Horas);
	
	
	
	
	
	return 0;
}
