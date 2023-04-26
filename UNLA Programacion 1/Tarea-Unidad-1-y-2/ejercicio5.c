#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headerPrueba.h"


void ejercicio5(void)
{
    char option,respuesta[10];
    int a,b,valor;
    do{
        printf("\n\n * Ejercicio 5: Mostrar el resultado de (a==b)&&((3<b)||(b<a) ), a y b son ingresados por el usuario.\n\n");



        printf("Ingrese el valor de 'a': \n");
        fflush(stdin);
        scanf("%d",&a);
        system("clear");

        printf("Ingrese el valor de 'b': \n");
        fflush(stdin);
        scanf("%d",&b);
        system("clear");

        valor = (a==b)&&((3<b)||(b<a));

        if(valor == 1)
        {
            strcpy(respuesta,"Verdadero");
        }else{
            strcpy(respuesta,"Falso");
        }

        printf("valor 'a' = %d\n",a);
        printf("valor 'b' = %d\n\n",b);
        printf("Que muestra:  %s  / (a==b)&&((3<b)||(b<a))\n",respuesta);

        printf("\nEscriba 's' si quiere salir de la actividad o sino ingrese cualquier dato\n");
        fflush(stdin);
        scanf(" %c",&option);

        system("clear");

    }while(option != 's');

}
