#include <stdio.h>
#include <stdlib.h>
#define ARRAY 16

int main()
{


    int A,B,C,opcion;

    char booleano[2] = {"FV"};

    char arrayActividad[16] = {"abcdefghijklmnop"};

    int array[ARRAY];

    printf("Caculemos expresiones logicas: \n");

    printf("Ingrese 1 si quiere ingresar los datos manualmente, en caso contrario ingrese cualquier otro valor: \n");
    scanf("%d",&opcion);
    system("clear");

    if(opcion == 1){

        //Asignacion manual

        printf("\n\nIngrese los valores de las siguientes variables y calculemos sus expresiones:\n");

        printf("Ingrese valor de A: \n");
        scanf("%d",&A);

        printf("Ingrese valor de B: \n");
        scanf("%d",&B);

        printf("Ingrese valor de C: \n");
        scanf("%d",&C);
    }else{

    //Asignacion automatica

    A = 5;

    B = 3;

    C = -12;

    }

    //Expresiones Logicas

    array[0] = A > 3;

    array[1] = A > C;

    array[2] = A < C;

    array[3] = B < C;

    array[4] = B != C;

    array[5] = A == 3;

    array[6] = (A * B) == 15;

    array[7] = A * B == -30;

    array[8] = C/B < A;

    array[9] = C/B == -10;

    array[10] = C/B == -4;

    array[11] = A + B + C == 5;

    array[12] = (A + B == 8) && (A - B == 2);

    array[13] = (A + B == 8) || (A - B == 6);

    array[14] = A > 3 && B > 3 && C < 3;

    array[15] = A > 3 && B >= 3 && C < -3;


    //Resultados

    for(int z = 0;z < ARRAY;z++)
    {
        printf("%c es: %c    \n",arrayActividad[z],booleano[array[z]]);
    }

    //Prueba de Suma

    /*int num1,num2,suma;

    printf("Ingrese 2 numeros que luego seran sumados:\n");

    printf("Ingrese el primer numero\n");
    scanf("%d",&num1);

    printf("Ingrese el segundo numero\n");
    scanf("%d",&num2);

    suma = num1+num2;

    printf("La suma es igual a: %d",suma);*/


    return 0;
}
