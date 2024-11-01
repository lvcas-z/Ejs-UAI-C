#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int diasPorMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mes;

    printf("Ingrese el numero del mes ej 1-enero o 12-diciembre: \n");
    scanf("%d", &mes);

    if (mes < 1 || mes > 12) {
        printf("Mes incorrecto. Por favor ingrese un numero entre 1 y 12.\n");
    } else {
        printf("El mes %d tiene %d dias.\n", mes, diasPorMes[mes - 1]);
    }

    return 0;
}
