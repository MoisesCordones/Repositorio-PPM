#include <stdio.h>


void main(void)
{
    char p1;
    FILE *ar;
    if ((ar = fopen("arc.txt", "r")) != NULL)
    {
        while (!feof(ar))
        {
            p1 = fgetc(ar);
            printf("%c", p1);
          //  putchar(p1);
        }
        fclose(ar);
    }
    else
        printf("No se puede abrir el archivo");
}

