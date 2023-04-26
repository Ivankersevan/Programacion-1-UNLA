#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headerPrueba.h"


void ejercicio6(void)
{
    char option,respuesta[10];
    int valor,numero;
    do{
        printf("\n\n * Ejercicio 6: Pedir que se ingrese un numero, de decir si cumple con que sea par y múltiplo de 5.\n\n");

        printf("Ingrese un numero: \n");
        fflush(stdin);
        scanf("%d",&numero);
        system("clear");

        valor = ((numero%2 == 0) && numero%5 == 0);

        if(valor == 1)
        {
            strcpy(respuesta,"Cumple");
        }else{
            strcpy(respuesta,"No cumple");
        }

        printf("%s:  / ((numero MOD 2 == 0) && numero MOD 5 == 0)\n",respuesta);

        printf("\nEscriba 's' si quiere salir de la actividad o sino ingrese cualquier dato\n");
        fflush(stdin);
        scanf(" %c",&option);

        system("clear");

    }while(option != 's');

}
