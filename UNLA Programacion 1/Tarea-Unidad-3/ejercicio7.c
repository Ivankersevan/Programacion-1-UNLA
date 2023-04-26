#include <stdio.h>
#include <stdlib.h>
#include "headerUnidad3.h"

void ejercicio7(void)
{
    char option;
    do{
        printf("\nMostrar los primeros 20 numeros pares usando while\n");

        int numero = 1,contador = 1;

        while(contador <= 20)
        {
            if(numero % 2 == 0)
            {
                contador++;
                printf("\n%d",numero);
            }

            numero++;
        }




       printf("\nEscriba 's' si quiere salir de la actividad o sino ingrese cualquier dato\n");
            fflush(stdin);
            scanf(" %c",&option);

            system("clear");

        }while(option != 's');

}
