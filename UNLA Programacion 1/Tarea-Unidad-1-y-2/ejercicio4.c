#include <stdio.h>
#include <stdlib.h>
#include "headerPrueba.h"


void ejercicio4(void)
{
        char option;
        int a = 1;
        int b = 2;
    do{
        printf("\n\n * Ejercicio 4: Explicar que muestra por pantalla cada línea.\n\n");

        printf("valor 'a' = %d\n",a);
        printf("valor 'b' = %d\n\n",b);
        printf("Que muestra:  %s  / (3==5)\n","Falso");
        printf("Que muestra:  %s  / (3<=5)\n","Verdadero");
        printf("Que muestra:  %s  / (-3<=-5)\n","Falso");
        printf("Que muestra:  %s  / (3<=5)&&(3==3)\n","Verdadero"); //AND Y
        printf("Que muestra:  %s  / (a<=b)||(b==4)\n","Vedadero"); //OR O
        printf("Que muestra:  %d  /  (8 MOD 3)\n",(8 % 3)); //% mod



        printf("\nEscriba 's' si quiere salir de la actividad o sino ingrese cualquier dato\n");
        fflush(stdin);
        scanf(" %c",&option);

        system("clear");

    }while(option != 's');

}
