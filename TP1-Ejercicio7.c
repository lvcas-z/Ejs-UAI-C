#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int suma;
	int producto;
	int resta;
	int a;
	int b;
	
	// Leer los dos valores
	printf("Ingrese el primer valor\n");
	scanf("%d",&a);
	printf("Ingrese el segundo valor \n");
	scanf("%d",&b);
	
	// Calcular la suma
	suma = a + b;
	
	// Calcular el producto
	producto = a * b;
	
	// Calcular la resta del primer valor menos el segundo
	resta = a - b;
	
	// Imprimir los resultados
	printf("La suma de los valores es : %d \n",suma);
	printf("El producto de los valores es : %d \n",producto);
	printf("La resta de los valores es : %d \n",resta);
	return 0;
}
