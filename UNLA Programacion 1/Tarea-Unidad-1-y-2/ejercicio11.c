#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headerPrueba.h"


void ejercicio11(void)
{
    char option;
    int dia;
    do{
        printf("\n\n * Ejercicio 11: Ingresar un numero que represente un día de la semana y mostrar por pantalla 1 – Lunes, …. 7 – Domingo, cualquier otro numero ERROR.\n\n");
       do
       {
        printf("Ingrese un dia: \n\n"
               "1-Lunes\n\n"
               "2-Martes\n\n"
               "3-Miercoles\n\n"
               "4-Jueves\n\n"
               "5-Viernes\n\n"
               "6-Sabado\n\n"
               "7-Domingo\n\n");
        fflush(stdin);
        scanf("%d",&dia);
        system("clear");

            switch(dia)
            {
                case 1:
                    printf("\nEl dia seleccionado es: 1-Lunes\n");
                    break;
                case 2:
                    printf("\nEl dia seleccionado es: 2-Martes\n");
                    break;
                case 3:
                    printf("\nEl dia seleccionado es: 3-Miercoles\n");
                    break;
                case 4:
                    printf("\nEl dia seleccionado es: 4-Jueves\n");
                    break;
                case 5:
                    printf("\nEl dia seleccionado es: 5-Viernes\n");
                    break;
                case 6:
                    printf("\nEl dia seleccionado es: 6-Sabado\n");
                    break;
                case 7:
                    printf("\nEl dia seleccionado es: 7-Domingo\n");
                    break;
                default:
                    printf("\nERROR, Seleccione de nuevo!!\n");
                    break;
            }
        }while(dia<=0 || dia>7);

        printf("\nEscriba 's' si quiere salir de la actividad o sino ingrese cualquier dato\n");
        fflush(stdin);
        scanf(" %c",&option);

        system("clear");

    }while(option != 's');

}
