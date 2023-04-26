#include <stdio.h>
#include <stdlib.h>
#include "headerUnidad3.h"

void ejercicio6(void)
{
    char option;
    do{
        printf("\nPedir un numero y decir si es primo o no: \n");

         int numero,flag = 0;

        do{
        printf("\nIngrese un numero: ");
        fflush( stdin );
        scanf("%d",&numero);
        system("clear");
        }while(numero == 1 || numero == -1);

        if(numero > 0)
        {
            for(int i = (numero-1); i > 1; i--)
            {
                if(numero%i == 0)
                {
                    flag = 1;
                }
            }
        }else{
            for(int i = (numero+1); i < -1; i++)
            {
                if(numero%i == 0)
                {
                    flag = 1;
                }
            }
        }


        if(flag == 1)
        {
            printf("\nNO ES PRIMO!!!!");
        }else{
            printf("\nES PRIMO!!!");
        }



       printf("\nEscriba 's' si quiere salir de la actividad o sino ingrese cualquier dato\n");
            fflush(stdin);
            scanf(" %c",&option);

            system("clear");

        }while(option != 's');

}
