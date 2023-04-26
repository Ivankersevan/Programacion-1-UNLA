#include <stdio.h>
#include <stdlib.h>
#include "headerUnidad3.h"

void ejercicio8(void)
{
    char option;
    do{
        printf("\nPedir un numero y transformarlo a binario: \n");

        int numero,i,b[8];

        printf("\nIngrese un numero: \n");
        fflush( stdin );
        scanf("%d",&numero);
        system("clear");

        for(i = 0; numero > 0; i++)
        {
           b[i] = numero%2;
           numero = numero / 2;
        }

        printf("\nEl numero binario es: \n\n");

        for(i=(i-1);i>=0;i--)
        {
            printf("%d",b[i]);
        }



       printf("\nEscriba 's' si quiere salir de la actividad o sino ingrese cualquier dato\n");
            fflush(stdin);
            scanf(" %c",&option);

            system("clear");

        }while(option != 's');

}
