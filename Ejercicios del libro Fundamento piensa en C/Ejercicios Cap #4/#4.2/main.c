#include <stdio.h>

/* Cubo-2.
El programa calcula el cubo de los 10 primeros n�meros naturales con la
ayuda de una funciun. */

int cubo(void); /* Prototipo de funciun. */
int I; /* Variable global. */
void main(void)
{
int CUB;
for (I = 1; I <= 10; I++)
{
CUB = cubo(); /* Llamada a la funciun cubo. */
printf("\nEl cubo de %d es: %d", I, CUB);
}
}
int cubo(void) /* Declaraciun de la funciun. */
/* La funciun calcula el cubo de la variable local I. */
{
int I = 2; /* Variable local entera I con el mismo nombre
que la variable global. */

return (I*I*I);
}

