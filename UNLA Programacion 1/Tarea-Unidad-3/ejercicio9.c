#include <stdio.h>
#include <stdlib.h>
#include "headerUnidad3.h"

void ejercicio9(void)
{
    char option;
    do{
        printf("\nCrear un programa que pida numeros positivos al usuario, y vaya calculando la suma de todos ellos (termina: n = negativo || n = 0 || suma > 1500)\n");

        int suma = 0,numero = 0;




        do{
            printf("\nIngrese un numero: \n");
            fflush( stdin );
            scanf("%d",&numero);


            suma += numero;
            printf("\n%d",suma);
        }while(numero != 0 && numero > 0 && suma <= 1500);



        printf("\nEl programa termino con la suma en: %d\n",suma - (numero));


       printf("\nEscriba 's' si quiere salir de la actividad o sino ingrese cualquier dato\n");
            fflush(stdin);
            scanf(" %c",&option);

            system("clear");

        }while(option != 's');

}
