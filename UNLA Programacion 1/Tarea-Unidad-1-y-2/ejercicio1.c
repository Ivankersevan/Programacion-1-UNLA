#include <stdio.h>
#include <stdlib.h>
#include "headerPrueba.h"


void ejercicio1(void)
{

    int numero1,numero2;
    char option;

    do{
        printf("\n\n * Ejercicio 1: Pedir por pantalla 2 números y sumarlos. Mostrar el resultado.\n\n");

        printf("\nIngrese el primer numero: \n");
        fflush(stdin);
        scanf("%d",&numero1);
        system("clear");

        printf("\nIngrese el segundo numero: \n");
        fflush(stdin);
        scanf("%d",&numero2);
        system("clear");

        printf("\n%d + %d = %d\n\n",numero1,numero2,(numero1+numero2));


        printf("\nEscriba 's' si quiere salir de la actividad o sino ingrese cualquier dato\n");
        fflush(stdin);
        scanf(" %c",&option);

        system("clear");

    }while(option != 's');

}


