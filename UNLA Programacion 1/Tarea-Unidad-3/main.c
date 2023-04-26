#include <stdio.h>
#include <stdlib.h>
#include "headerUnidad3.h"

int main()
{

    int opcion = 0;

    do{

    printf("\n------------Menu de Actividades Unidades 3------------\n\n");

    //Menu Tarea

    printf("Unidad 3: \n"
           "\t\t* Ejercicio 1\n"
           "\t\t* Ejercicio 2\n"
           "\t\t* Ejercicio 3\n"
           "\t\t* Ejercicio 4\n"
           "\t\t* Ejercicio 5\n"
           "\t\t* Ejercicio 6\n"
           "\t\t* Ejercicio 7\n"
           "\t\t* Ejercicio 8\n"
           "\t\t* Ejercicio 9\n"
           "\t\t* Ejercicio 10\n"
           "\t\t* Ejercicio 11\n"
           "\t\t* Ejercicio 12\n\n\n"
           "\t\t** '0' para Salir **\n");




    printf("\nIngrese el numero de la tarea a ingresar: \n");
    fflush(stdin);
    scanf("%d",&opcion);
    system("clear");

    switch(opcion)
        {
            case 1:
                    system("clear");
                    ejercicio1();
                break;
            case 2:
                    system("clear");
                    ejercicio2();
                break;
            case 3:
                    system("clear");
                    ejercicio3();
                break;
            case 4:
                    system("clear");
                    ejercicio4();
                break;
            case 5:
                    system("clear");
                    ejercicio5();
                break;
            case 6:
                    system("clear");
                    ejercicio6();
                break;
            case 7:
                    system("clear");
                    ejercicio7();
                break;
            case 8:
                    system("clear");
                    ejercicio8();
                break;
            case 9:
                    system("clear");
                    ejercicio9();
                break;
            case 10:
                    //system("clear");
                    //ejercicio10();
                break;
            case 11:
                    //system("clear");
                    //ejercicio11();
                break;
            case 12:
                    //system("clear");
                    //ejercicio12();
                break;
            case 0:
                    printf("\n\nSaliendo del programa.....\n\n");
                break;
            default:
                printf("\n\n\tERROR:  Ingrese una opcion valida");
                break;
        }

    }while(opcion != 0);

    return 0;
}
