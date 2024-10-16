#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int horas,horasContratadas = 0 ,semana,montoTotal =0 ;
	
	printf("Ingrese el tipo de uso de la cabina (1 para semana, 2 para fin de semana, 3 para finalizar):\n");
    scanf("%d", &semana);
	
	while (semana != 3) {
        if (semana == 1 || semana == 2) {
            printf("Ingrese sus horas:\n");
            scanf("%d", &horas);
            horasContratadas += horas;

            if (semana == 1) {
                montoTotal += horas * 50;
            } else if (semana == 2) {
                montoTotal += horas * 65;
            }
        } else {
            printf("Opción inválida. Intente nuevamente.\n");
        }

        printf("Ingrese el tipo de uso de la cabina (1 para semana, 2 para fin de semana, 3 para finalizar):\n");
        scanf("%d", &semana);
    }

	printf("Total de horas contratadas: %d\n", horasContratadas);
	printf("El monto total a pagar es: $%d\n", montoTotal);

	
	return 0;
}
