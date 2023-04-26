#include <stdio.h>
#include <stdlib.h>
#include "headerUnidad3.h"
#define INITIAL 1

void ejercicio5(void)
{
    char option;
    do{
        printf("\nRealizar la prueba de escritorio del ejercicio 4 para n = 6\n");

        int numero = 6,factorial = INITIAL;

        for(int i = INITIAL;i <= numero;i++)
        {
            factorial *= i;
            printf("\n%d",factorial);
        }

       printf("\nEscriba 's' si quiere salir de la actividad o sino ingrese cualquier dato\n");
            fflush(stdin);
            scanf(" %c",&option);

            system("clear");

        }while(option != 's');

}
