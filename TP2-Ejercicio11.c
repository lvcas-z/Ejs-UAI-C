#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int horaEmpleado,sueldo,cat;
	
	printf("Ingrese sus horas realizadas: \n");
	scanf("%d",&horaEmpleado);
	printf("Ahora ingrese su categoria: \n");
	scanf("%d",&cat);
	switch(cat){
		case 1 :
			sueldo = horaEmpleado * 50;
			printf("Su sueldo es : %d \n",sueldo);
			break;
		case 2 :
			sueldo = horaEmpleado * 70;
			printf("Su sueldo es : %d \n",sueldo);
			break;
		case 3 :
			sueldo = horaEmpleado * 80;
			printf("Su sueldo es : %d \n",sueldo);
			break;
		default: printf("Error al ingresar su categoria");
		
	}
	
	return 0;
}
