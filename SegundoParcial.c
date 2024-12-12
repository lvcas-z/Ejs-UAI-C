#include <stdio.h>

const int maxLampara = 10;
const int empleados = 100;

void buscarLampara(int nro, int lamparas[], int tam, int *pos);

int main() {
    int i, j;

    int nroLampara[maxLampara];
    float precio[maxLampara];
    int stock[maxLampara];

    printf("Ingrese datos de las lamparas (Lote 1):\n");
    for (i = 0; i < maxLampara; i++) {
        printf("Nro de lampara (3 digitos): ");
        scanf("%d", &nroLampara[i]);
        printf("Precio: ");
        scanf("%f", &precio[i]);
        printf("Stock actual: ");
        scanf("%d", &stock[i]);
    }


    int nroPedido, nroLamparaPedido, nroEmpleado, cantidadPedida;
    int pedidosEmpleado55 = 0;
    int ventasPorEmpleado[empleados];
    
    // Inicializo las ventas en 0
    for (i = 0; i < empleados; i++) {
        ventasPorEmpleado[i] = 0;
    }

    int stockFinal[maxLampara];
    for (i = 0; i < maxLampara; i++) {
        stockFinal[i] = stock[i];
    }

    printf("\nIngrese pedidos (Lote 2). Finalice con nro de pedido = 0:\n");
    while (1) {
        printf("\nNro de pedido: ");
        scanf("%d", &nroPedido);
        if (nroPedido == 0) break;

        printf("Nro de lampara (3 digitos): ");
        scanf("%d", &nroLamparaPedido);
        printf("Nro de empleado: ");
        scanf("%d", &nroEmpleado);
        printf("Cantidad pedida: ");
        scanf("%d", &cantidadPedida);


        int posicionLampara;
        buscarLampara(nroLamparaPedido, nroLampara, maxLampara, &posicionLampara);

        if (posicionLampara != -1 && stockFinal[posicionLampara] >= cantidadPedida) {
            stockFinal[posicionLampara] -= cantidadPedida;

            if (nroEmpleado == 55) {
                pedidosEmpleado55++;
            }

            // registro ventas
            if (nroEmpleado >= 0 && nroEmpleado < empleados) {
                ventasPorEmpleado[nroEmpleado] += cantidadPedida;
            } else {
                printf("Número de empleado no válido.\n");
            }
        } else {
            printf("Pedido rechazado: Lampara no existe o stock insuficiente.\n");
        }
    }


    printf("\nResultados finales:\n");
    
    printf("1. Pedidos atendidos por empleado 55: %d\n", pedidosEmpleado55);

    printf("2. Empleados con mayor venta total:\n");

    int empleadosOrdenados[empleados];
    for (i = 0; i < empleados; i++) {
        empleadosOrdenados[i] = i;
    }

    // ordeno empleados
    for (i = 0; i < empleados - 1; i++) {
        for (j = i + 1; j < empleados; j++) {
            if (ventasPorEmpleado[empleadosOrdenados[i]] < ventasPorEmpleado[empleadosOrdenados[j]]) {
                int temp = empleadosOrdenados[i];
                empleadosOrdenados[i] = empleadosOrdenados[j];
                empleadosOrdenados[j] = temp;
            }
        }
    }
    for (i = 0; i < empleados; i++) {
        int empIndex = empleadosOrdenados[i];
        if (ventasPorEmpleado[empIndex] > 0) {
            printf("   Empleado %d: %d unidades vendidas\n", empIndex, ventasPorEmpleado[empIndex]);
        }
    }
    
    printf("3. Stock final de cada lampara:\n");
    for (i = 0; i < maxLampara; i++) {
        printf("   Lampara %d: %d unidades\n", nroLampara[i], stockFinal[i]);
    }

    return 0;
}

void buscarLampara(int nro, int lamparas[], int tam, int *pos) {
    *pos = -1; // valor por defecto si no encuentra lampara
    int i;
    for (i = 0; i < tam; i++) {
        if (lamparas[i] == nro) {
            *pos = i; // actualizo  posicion si encuentro el num
        }
    }
}


