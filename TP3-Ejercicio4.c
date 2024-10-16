#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int valor, contadorHastaDiez = 0, contadorHastaVeinte = 0, contadorHastaTreinta = 0, contadorMasTreinta = 0;
    int i=0;
    float porcentajeHastaDiez, porcentajeHastaVeinte, porcentajeHastaTreinta, porcentajeMasTreinta;

    
    while(i< 30){
        printf("Ingrese un valor: \n");
        scanf("%d", &valor);

        if(valor >= 1 && valor < 10){
            contadorHastaDiez++;
        } else if(valor >= 10 && valor < 20){
            contadorHastaVeinte++;
        } else if(valor >= 20 && valor < 30){
            contadorHastaTreinta++;
        } else if(valor > 30){
            contadorMasTreinta++;
        }
        i++;
    }

    
    porcentajeHastaDiez = (float)contadorHastaDiez / 30 * 100;
    porcentajeHastaVeinte = (float)contadorHastaVeinte / 30 * 100;
    porcentajeHastaTreinta = (float)contadorHastaTreinta / 30 * 100;
    porcentajeMasTreinta = (float)contadorMasTreinta / 30 * 100;

    
    printf("El porcentaje de numeros entre 1 y 10 es: %.2f%%\n", porcentajeHastaDiez);
    printf("El porcentaje de numeros entre 10 y 20 es: %.2f%%\n", porcentajeHastaVeinte);
    printf("El porcentaje de numeros entre 20 y 30 es: %.2f%%\n", porcentajeHastaTreinta);
    printf("El porcentaje de numeros mayores de 30 es: %.2f%%\n", porcentajeMasTreinta);

    return 0;
}

