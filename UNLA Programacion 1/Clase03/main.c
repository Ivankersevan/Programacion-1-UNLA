#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    char nombre[15];

    printf("\nIngrese su edad: \n");
    fflush( stdin );
    scanf("%d",&edad);
    printf("\nIngrese su nombre: \n");
    fflush( stdin );
    scanf("%*c%[^\n]",nombre);

    printf("\nSu nombre es: %s y su edad es: %d",nombre,edad);
    return 0;
}
