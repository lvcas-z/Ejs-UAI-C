#include <stdio.h>
#include <stdlib.h>

float calcularArea(float radio); // Prototipo de funcion
void imprimirResultado(float area); // Prototipo de procedimiento



int main(int argc, char *argv[]) {
	
	float area,radio;
	
	printf("---- Calculo de Area de un circulo ----\n");
	printf("---------------------------------------\n");
	
	
	printf("Ingrese el radio del circulo:\n");
	scanf("%f",&radio);
	
	area=calcularArea(radio);
	
	imprimirResultado(area);
	
	
	return 0;
}

float calcularArea(float radio){
	return 3.14 * radio * radio; // Valor aproximado de pi
}

void imprimirResultado(float area){
	printf("---------------------------------------\n");
	printf("El area de un circulo es : %.2f\n",area);
}
