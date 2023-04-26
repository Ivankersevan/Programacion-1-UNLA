#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headerPrueba.h"


void ejercicio10(void)
{
    char option;
    int año;
    do{
        printf("\n\n * Ejercicio 10: Ingresar un año por teclado, una vez ingresado mostrar por pantalla, ESTE AÑO ES BISIESTO o ESTE AÑO NO ES BISIESTO."
               "\n\n *Un año es bisiesto si es múltiplo de 4, y (no termina en 00 o es divisible por 400). \n\n");

       do
       {
        printf("Ingrese un año: \n");
        fflush(stdin);
        scanf("%d",&año);
        system("clear");
        }while(año < 0);

        if(año%4 == 0 && (año%100 != 0 || año%400 == 0))
        {
            printf("El año %d es BISIESTO!!!",año);
        }else{
            printf("El año %d NO es BISIESTO!!!!",año);
        }

        printf("\nEscriba 's' si quiere salir de la actividad o sino ingrese cualquier dato\n");
        fflush(stdin);
        scanf(" %c",&option);

        system("clear");

    }while(option != 's');

}
