#include <stdio.h>

typedef struct
{
    int clave;
    int departamento;
    float salario;
    float ventas[12];
} empleado;

void incrementa(FILE *);

int main(void)
{
    FILE *ar;
    if ((ar = fopen("ad1.dat", "w+")) != NULL) {
        incrementa(ar);
    } else {
        printf("\nEl archivo no se puede abrir");
        return 1;  // Salir del programa en caso de error
    }

    rewind(ar);
    fclose(ar);

    return 0;
}

void incrementa(FILE *ap)
{
    int i, j, t;
    float sum;
    empleado emple;
    t = sizeof(empleado);

    fread(&emple, sizeof(empleado), 1, ap);
    while (!feof(ap))
    {
        i = ftell(ap) / t;

        sum = 0;
        for (j = 0; j < 12; j++)
            sum += emple.ventas[j];
        if (sum > 50000)
        {
            emple.salario = emple.salario * 1.10;
            fseek(ap, (i - 1) * sizeof(empleado), 0);

            fwrite(&emple, sizeof(empleado), 1, ap);
            fseek(ap, i * sizeof(empleado), 0);
        }
        fread(&emple, sizeof(empleado), 1, ap);
    }
}
