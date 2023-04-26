#include <stdio.h>
#include <stdlib.h>
#include "headerUnidad3.h"

void ejercicio1(void)
{
    char option;

    do{
        printf("\nMostrar todos los numeros pares entre 15 y 50\n");

        for(int i = 15;i <= 50;i++)
        {

            if(i % 2 == 0)
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
