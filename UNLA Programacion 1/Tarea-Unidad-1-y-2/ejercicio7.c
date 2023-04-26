#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headerPrueba.h"


void ejercicio7(void)
{
    char option;
    int numero1,numero2;
    do{
        printf("\n\n * Ejercicio 7: Pedir dos números, mostrar por pantalla el mayor de ellos\n\n");

        printf("Ingrese el primer numero: \n");
        fflush(stdin);
        scanf("%d",&numero1);
        system("clear");

        printf("Ingrese el segundo numero: \n");
        fflush(stdin);
        scanf("%d",&numero2);
        system("clear");

        if(numero1 == numero2)
        {
            printf("\nSon los numeros iguales: %d = %d\n",numero1,numero2);
        }else if(numero1 > numero2){
            printf("\nEl numero mayor es: %d > %d\n",numero1,numero2);
        }else{
            printf("\nEl numero mayor es: %d > %d\n",numero2,numero1);
        }

        printf("\nEscriba 's' si quiere salir de la actividad o sino ingrese cualquier dato\n");
        fflush(stdin);
        scanf(" %c",&option);

        system("clear");

    }while(option != 's');

}
