#include <stdio.h>
#include <stdlib.h>
#include "headerPrueba.h"

void ejercicio2(void)
{
    float numero1,numero2;
    char option;

    do{
        printf("\n\n * Ejercicio 2: Pedir por pantalla 2 números y dividirlos, mostrar el resultado. \n\n");


        printf("\nIngrese el primer numero: \n");
        fflush(stdin);
        scanf("%f",&numero1);
        system("clear");

        printf("\nIngrese el segundo numero: \n");
        fflush(stdin);
        scanf("%f",&numero2);
        system("clear");

        printf("\n%.2f / %.2f = %.2f \n\n",numero1,numero2,(numero1/numero2));

        printf("\nEscriba 's' si quiere salir de la actividad o sino ingrese cualquier dato\n");
        fflush(stdin);
        scanf(" %c",&option);

        system("clear");

    }while(option != 's');

}
