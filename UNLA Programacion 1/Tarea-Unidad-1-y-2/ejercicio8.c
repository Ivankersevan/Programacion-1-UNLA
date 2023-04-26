#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headerPrueba.h"
#define ARRAY 3


void ejercicio8(void)
{
    char option;
    int numero[ARRAY],k,i,j,a,z;
    do{
        printf("\n\n * Ejercicio 8: Pedir por pantalla 3 números, mostrar los 3 números de mayor a  menor.\n\n");

        for(k = 0;k < ARRAY;k++)
        {
            printf("Ingrese el %d° numero: \n",(k+1));
            fflush(stdin);
            scanf("%d",&numero[k]);
            system("clear");
        }

        for (i = 0; i < ARRAY; ++i)
        {
            for (j = i + 1; j < ARRAY; ++j)
            {
                if (numero[i] < numero[j])
                {
                    a =  numero[i];
                    numero[i] = numero[j];
                    numero[j] = a;
                }
            }
        }

        for(z = 0;z < ARRAY;z++)
        {
            printf("%d \t",numero[z]);
        }

        printf("\n\nEscriba 's' si quiere salir de la actividad o sino ingrese cualquier dato\n");
        fflush(stdin);
        scanf(" %c",&option);

        system("clear");

    }while(option != 's');

}
