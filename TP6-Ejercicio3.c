#include <stdio.h>
#include <string.h>

int main() {
	const int NUM_EMPLEADOS = 10;
    char nombre[NUM_EMPLEADOS][50];
    int categoria[NUM_EMPLEADOS], antiguedad[NUM_EMPLEADOS];
    int empleadosPorCategoria[3] = {0, 0, 0};
    int totalSueldosPorCategoria[3] = {0, 0, 0};
    int sueldoMaximo = 0, indiceSueldoMax = 0;
    int totalSueldos = 0;
    int i;

    // Ingreso de datos de empleados
    for (i = 0; i < NUM_EMPLEADOS; i++) {
        printf("Empleado %d\n", i + 1);
        printf("Nombre: ");
        scanf("%s", nombre[i]);
        printf("Categoria (1, 2 o 3): ");
        scanf("%d", &categoria[i]);
        printf("Antiguedad (años): ");
        scanf("%d", &antiguedad[i]);

        int sueldoBase;
        if (categoria[i] == 1) {
            sueldoBase = 1500;
            empleadosPorCategoria[0]++;
        } else if (categoria[i] == 2) {
            sueldoBase = 2000;
            empleadosPorCategoria[1]++;
        } else if (categoria[i] == 3) {
            sueldoBase = 2500;
            empleadosPorCategoria[2]++;
        } else {
            printf("Categoria no valida, se omitira este empleado.\n");
            continue;
        }

        int sueldoFinal = sueldoBase + (antiguedad[i] * 100);
        totalSueldos += sueldoFinal;
        totalSueldosPorCategoria[categoria[i] - 1] += sueldoFinal;

        // Verificar sueldo máximo
        if (sueldoFinal > sueldoMaximo) {
            sueldoMaximo = sueldoFinal;
            indiceSueldoMax = i;
        }
    }

    // Resultados
    printf("\nEmpleados por categoria:\n");
    for ( i = 0; i < 3; i++) {
        printf("Categoria %d: %d empleados\n", i + 1, empleadosPorCategoria[i]);
    }

    printf("\nTotal de sueldos por categoria:\n");
    for (i = 0; i < 3; i++) {
        printf("Categoria %d: $%d\n", i + 1, totalSueldosPorCategoria[i]);
    }

    float sueldoPromedio = (float)totalSueldos / NUM_EMPLEADOS;
    printf("\nSueldo promedio total: $%.2f\n", sueldoPromedio);
    printf("Sueldo maximo: $%d del Empleado: %s)\n", sueldoMaximo, nombre[indiceSueldoMax]);

    printf("\nPorcentaje sobre el total de sueldos por categoria:\n");
    for ( i = 0; i < 3; i++) {
        float porcentaje = ((float)totalSueldosPorCategoria[i] / totalSueldos) * 100;
        printf("Categoria %d: %.2f%%\n", i + 1, porcentaje);
    }

    return 0;
}
