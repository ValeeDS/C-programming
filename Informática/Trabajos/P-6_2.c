#include <stdio.h>
#define F 2
#define C 5

float cargar_matriz(float matriz[F][C]);
float ordenar_filas(float matriz[F][C]);
void imprimir_matriz(float matriz[F][C]);


void main()
{
    float matriz[F][C];
    cargar_matriz(matriz);
    imprimir_matriz(matriz);
    printf("\n\nORDENADA");
    ordenar_filas(matriz);
    imprimir_matriz(matriz);
}

float ordenar_filas(float matriz[F][C])
{
    float aux;
    for(int i=0;i<F;i++)
    {
        for(int j1=0;j1<C;j1++)
        {
            for(int j2=j1;j2<C;j2++)
            {
                if(matriz[i][j1]>matriz[i][j2])
                {
                    aux=matriz[i][j1];
                    matriz[i][j1]=matriz[i][j2];
                    matriz[i][j2]=aux;
                }
            }
        }
    }
    return matriz[F][C];
}

float cargar_matriz(float matriz[F][C])
{
    printf("Ingrese los valores de la matriz:",F,C);
    for(int i=0;i<F;i++)
    {
        for(int j=0;j<C;j++)
        {
            float e;
            printf("\nValor del elemento [%i][%i]: ",i,j);
            scanf("%f",&e);
            matriz[i][j]=e;
        }
    }
    return matriz[F][C];
}

void imprimir_matriz(float matriz[F][C])
{
    printf("\nLa matriz es:\n");
    for(int i=0;i<F;i++)
    {
        for(int j=0;j<C;j++)
        {
            printf(" %f ",matriz[i][j]);
        }
        printf("\n");
    }
}
