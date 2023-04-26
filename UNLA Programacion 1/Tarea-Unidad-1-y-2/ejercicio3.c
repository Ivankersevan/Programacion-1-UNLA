#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headerPrueba.h"

void ejercicio3(void)
{
    int edad;
    float altura;
    char option;
    char nombre[15],apellido[15],genero[15];

    do{
        printf("\n\n * Ejercicio 3: Pedir por pantalla nombre, apellido, edad, altura y genero de una persona, mostrar los datos por pantalla.  \n\n");


        printf("\nIngrese su nombre: \n");
        fflush(stdin);
        scanf("%s",nombre);
        system("clear");

        printf("\nIngrese su apellido: \n");
        fflush(stdin);
        scanf("%s",apellido);
        system("clear");

        printf("\nIngrese su edad: \n");
        fflush(stdin);
        scanf(" %d",&edad);
        system("clear");

        printf("\nIngrese su altura: \n");
        fflush(stdin);
        scanf("%f",&altura);
        system("clear");

        do{
            printf("\nIngrese su genero 'hombre'/'mujer'/'no responder': \n");
            fflush(stdin);
            scanf("%*c%[^\n]",genero);
            system("clear");
        }while(strcmp(genero,"hombre") != 0 && strcmp(genero,"mujer") != 0 && strcmp(genero,"no responder") != 0);


        printf("\n\n--------Datos Personales--------\n\n"
               "Nombre: %s\n"
               "Apellido %s\n"
               "Edad: %d\n"
               "Altura: %.2f\n"
               "Genero: %s\n",nombre,apellido,edad,altura,genero);


        printf("\nEscriba 's' si quiere salir de la actividad o sino ingrese cualquier dato\n");
        fflush(stdin);
        scanf(" %c",&option);

        system("clear");

    }while(option != 's');

}
