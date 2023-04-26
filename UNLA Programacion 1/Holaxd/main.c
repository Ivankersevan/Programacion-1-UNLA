#include <stdio.h>
#include <stdlib.h>
#define ARRAY 3
//Actividad 12 Ivan Kersevan 41854724

int main()
{
    float numeros[ARRAY],total = 0,acumulador = 0;
    int i;

        printf("\n\n * Ejercicio 12: Pedir por pantalla 3 números flotantes, calcular el promedio de estos tres números.\n\n");

        for(i = 0;i < ARRAY;i++)
        {
            printf("\nIngrese el %d° numero flotante: \n",(i+1));
            fflush(stdin);
            scanf("%f",&numeros[i]);
            acumulador += numeros[i];
            system("clear");
        }

        total = (acumulador/ARRAY);

        printf("\nEl promedio es: %.2f",total);

    return 0;
}
