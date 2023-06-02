#include <stdio.h>

/* Estancia
   El programa, al recibir como dato la superficie de una estancia expresada
   en acres, la convierte a hectareas.

   ECA: variable de tipo real. */

void main (void)
{
    float ECA;
    printf("Ingrese la extension de la estnacia: ");
    scanf("%f", &ECA);
    ECA = ECA *4047 / 10000;
    printf("\nExtension de la estancia en hectareas: 55.2F", ECA);

}
