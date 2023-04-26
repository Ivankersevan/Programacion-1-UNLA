#include <stdio.h>
#include <stdlib.h>


//Ejemplo 1: Pedir por pantalla, edad, apellido y altura, guardarlos en variables. Mostrar lo que se ingreso.

int main()
{

    int edad;
    float altura;
    char apellido[20];

    printf("Ejemplo 1: Pedir por pantalla, edad, apellido y altura, guardarlos en variables. Mostrar lo que se ingreso. \n");

    printf("Ingrese su edad: \n");
    scanf("%d",&edad);

    printf("Ingrese su apellido: \n");
    fflush(stdin);
    scanf("%s",&apellido);

    printf("Ingrese su altura: \n");
    fflush(stdin);
    scanf("%f",&altura);

    system("clear");

    printf("\nApellido: %s \nEdad: %d\nAltura: %.2f",apellido,edad,altura);

    return 0;
}
