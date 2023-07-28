#include <stdio.h>

typedef struct
{
    char nombre[20];
    int clave;
    char departamento[20];
    float salario;
    float ventas[12];
} empleado;

void escribe(FILE *);
void main(void)
{
    FILE *ar;
    if ((ar = fopen ("ad1.dat", "w")) != NULL)
        escribe(ar);
    else
        printf("\nEl archivo no se puede abrir");
    fclose(ar);
}

void escribe(FILE *ap)
{
    empleado emple;
    int i = 0, r;
    printf("\nDesea ingresar informacion sobre empleado? (Si-1 No-0): ");
    scanf("%d", &r);

    while (r)
    {
    i++;
    printf("Clave del empleado %d: ", i);
    scanf("%d", &emple.clave);

    printf("Nombre del empleado %d: ", i);
    fflush(stdin);
    gets(emple.nombre);

    printf("Departamento del empleado %d: ", i);
    fflush(stdin);
    gets(emple.departamento);
    /*scanf("%d", &emple.departamento);*/

    printf("Salario del empleado %d: ", i);
    scanf("%f", &emple.salario);

    printf("Ventas del empleado %d: ", i);
    scanf("%f", &emple.ventas);

    fwrite(&emple, sizeof(empleado), 1, ap);

    printf("\nDesea ingresar informacion sobre mas empleados? (Si-1 No-0): ");
    scanf("%d", &r);

    }
}
