#include <stdio.h>
#include <stdlib.h>
#include "headerUnidad3.h"
#define INITIAL 1

void ejercicio4(void)
{
    char option;
    do{
        printf("\nPedir que se calcule un numero por teclado. Calcularel factorial del numero.\n");

        int numero,factorial = INITIAL;

        printf("\nIngrese un numero: \n");
        fflush( stdin );
        scanf("%d",&numero);
        system("clear");

        if(numero > 0)
        {
            for(int i = INITIAL;i <= numero;i++)
            {
                factorial *= i;
                printf("\n%d",factorial);
            }

        }else if(numero == 0)
            {
                printf("\nEl factorial de 0 es %d",1);
            }else{
                printf("\nEl factorial de numeros negativos es %d",0);
            }



       printf("\nEscriba 's' si quiere salir de la actividad o sino ingrese cualquier dato\n");
            fflush(stdin);
            scanf(" %c",&option);

            system("clear");

        }while(option != 's');

}
