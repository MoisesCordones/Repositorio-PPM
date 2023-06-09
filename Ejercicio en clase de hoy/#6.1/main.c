#include <stdio.h>

const int TAM = 3;

void Lectura(int [][TAM], int);
void suma (int [][TAM], int [][TAM], int, int);
void Imprime (int [][TAM], int);


void main(void)
{
    int MAT1[TAM][TAM];
    int MAT2[TAM][TAM];
    int MATsuma[TAM][TAM];

    printf("Ingrese los elementos de la primera matriz:\n");
    Lectura(MAT1, TAM);

    printf("Ingrese los elementos de la segunda matriz:\n");
    Lectura(MAT2, TAM);

    SumaMatrices(MAT1, MAT2, MATSuma, TAM);
    scanf("%d", &A[I][J]);

    /*Lectura(MAT, TAM);
    Imprime(MAT, TAM);*/
}
/*
void Lectura(int A[][TAM], int F)
{
    int I,J;
    for (I=0; I<F; I++)
        for (J=0; J<F; J++)
        {

            scanf("%d", &A[I][J]);
        }
}
*/

void suma (int A[][TAM], int B[][TAM],int  F)
{
    int I, J;
    for (I = 0; I < F; I++) {
        for (J = 0; J < F; J++) {
            C[I][J] = A[I][J] + B[I][J];
        }
    }
}

