#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i = 0;
    int contadorMas40 = 0;  // Contador para montos que superan los $40
    float totalMultas = 0;  // Total de las multas
    float totalMultas40 = 0; // Total de las multas que superan los $40
    float multa;              // Variable para almacenar el monto de la multa actual
    char patente[10];         // Variable para almacenar la patente

    while (i < 50) {
        printf("Ingrese la patente del auto %d: ", i + 1);
        scanf("%s", patente);

        printf("Ingrese el monto de la multa del auto %s: ",patente);
        scanf("%f", &multa);

        totalMultas += multa; // Acumula el total cobrado

        if (multa > 40) {
            contadorMas40++;           // Incrementa el contador si la multa supera los $40
            totalMultas40 += multa;    // Suma al total de multas que superan $40
        }
        
        i++; // Avanza al siguiente auto
    }

    // Calcula el porcentaje
    float porcentaje40 = (totalMultas40 / totalMultas) * 100;

    // Resultados
    printf("\nTotal de multas que superan los $40: %d\n", contadorMas40);
    printf("Porcentaje del total cobrado que representan las multas mayores a $40: %.2f%%\n", porcentaje40);

    return 0;
}
