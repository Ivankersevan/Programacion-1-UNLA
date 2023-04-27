#include <stdio.h>
#include <stdlib.h>

int main()
{

        printf("\nCrear un programa que pida numeros positivos al usuario, y vaya calculando la suma de todos ellos (termina: n = negativo || n = 0 || suma > 1500)\n");

        int suma = 0,numero = 0;


        do{

            printf("\n\n La suma va %d\n",suma);
            printf("\nIngrese un numero: \n");
            fflush( stdin );
            scanf("%d",&numero);


            suma += numero;

        }while(numero != 0 && numero > 0 && suma <= 1500);



        printf("\nEl programa termino con la suma en: %d\n",suma - (numero));

    return 0;

}

