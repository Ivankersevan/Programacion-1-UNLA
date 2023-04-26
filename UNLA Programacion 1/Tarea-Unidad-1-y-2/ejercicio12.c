#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headerPrueba.h"
#define ARRAY 3


void ejercicio12(void)
{
    char option;
    float numeros[ARRAY],total = 0,acumulador = 0;
    int i;
    do{
        printf("\n\n * Ejercicio 12: Pedir por pantalla 3 números flotantes, calcular el promedio de estos tres números.\n\n");

        for(i = 0;i < ARRAY;i++)
        {
            printf("\nIngrese el %d° numero flotante: \n",(i+1));
            fflush(stdin);
            scanf("%f",&numeros[i]);
            acumulador += numeros[i];
            system("clear");
        }

        total = (acumulador/ARRAY);

        printf("\nEl promedio es: %.2f",total);

        printf("\nEscriba 's' si quiere salir de la actividad o sino ingrese cualquier dato\n");
        fflush(stdin);
        scanf(" %c",&option);

        system("clear");

    }while(option != 's');

}
