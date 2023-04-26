#include <stdio.h>
#include <stdlib.h>
#include "headerUnidad3.h"

void ejercicio2(void)
{
    char option;

    do{
        printf("\nMostrar todos los numeros divisibles por 2,por 6 y por 7 que no sean divisibles por 4 y sean menores a 10000\n");

        for(int i = 0;i < 10000;i++)
        {

            if(i%2 == 0 && i%6 == 0 && i%7 == 0 && i%4 != 0)
            {
                printf("\n%d\n",i);
            }

        }



       printf("\nEscriba 's' si quiere salir de la actividad o sino ingrese cualquier dato\n");
            fflush(stdin);
            scanf(" %c",&option);

            system("clear");

        }while(option != 's');

}
