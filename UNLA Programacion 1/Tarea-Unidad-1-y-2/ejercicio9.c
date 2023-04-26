#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headerPrueba.h"


void ejercicio9(void)
{
    char option;
    float peso,altura,IMC;
    do{
        printf("\n\n * Ejercicio 9: Pedir el peso y la altura de una persona, calcular el índice de masa corporal y en base el resultado mostrar: \n\n"
               "Peso inferior al normal: Menos de 18,5\n"
               "Peso normal: 18,5 - 24,9\n"
               "Peso superior al normal: 25 - 29,9\n"
               "Peso de obesidad: Mas de 30,0\n\n");

       do
       {
        printf("Ingrese su peso: \n");
        fflush(stdin);
        scanf("%f",&peso);
        system("clear");

        printf("Ingrese su altura: \n");
        fflush(stdin);
        scanf("%f",&altura);
        system("clear");
        }while(peso<=0 && altura<=0);


        IMC = (peso / (altura * altura));

        if(IMC < 18.5)
        {
            printf("\n Tiene un IMC inferior a lo normal con: %.2f IMC",IMC);
        }else if(IMC >= 18.5 && IMC < 25)
            {
                printf("\n Tiene un IMC normal con: %.2f IMC",IMC);
            }else if(IMC >= 25 && IMC < 30)
                {
                    printf("\n Tiene un IMC superior al normal con: %.2f IMC",IMC);
                }else{
                    printf("\n Tiene un IMC de obesidad con: %.2f IMC",IMC);
                }


        printf("\nEscriba 's' si quiere salir de la actividad o sino ingrese cualquier dato\n");
        fflush(stdin);
        scanf(" %c",&option);

        system("clear");

    }while(option != 's');

}
