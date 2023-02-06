#include <stdio.h>
#include <stdlib.h>
#define F 2
#define C 2

int menu(int *sel);
float cargar_matriz(float matriz[F][C]);
void imprimir_matriz(float matriz[F][C]);
float promedio_matriz(float matriz [F][C]);
float suma_fila(float matriz[F][C],int fila);
float producto_diagonal(float matriz[F][C],int diag);
int pos_neg(float matriz[F][C],int col,int sg);
float trasponer_matriz(float matriz[F][C],float matriz_t[C][F]);

void main()
{
    float matriz[F][C];
    int sel;
    do
    {
        menu(&sel);
        switch(sel)
        {
            case 1:
            {
                printf("Opción %i\n\n",sel);
                cargar_matriz(matriz);
                imprimir_matriz(matriz);
                break;
            }
            case 2:
            {
                printf("Opción %i\n\n",sel);
                imprimir_matriz(matriz);
                float prom;
                prom=promedio_matriz(matriz);
                printf("\nEl promedio de los valores de la matriz es: %f\n",prom);
                break;
            }
            case 3:
            {
                printf("Opción %i\n\n",sel);
                float suma;
                int fila;
                imprimir_matriz(matriz);
                printf("Fila que desea sumar: ");
                scanf("%i",&fila);
                suma=suma_fila(matriz,fila);
                printf("\nLa suma de la fila %i es: %f\n",fila,suma);
                break;
            }
            case 4:
            {
                printf("Opción %i\n\n",sel);
                imprimir_matriz(matriz);
                float prod1, prod2;
                prod1=producto_diagonal(matriz,1);
                printf("\nEl producto de la diagonal principal es %f\n",prod1);
                prod2=producto_diagonal(matriz,2);
                printf("\nEl producto de la diagonal secundaria es %f\n",prod2);
                break;
            }
            case 5:
            {
                printf("Opción %i\n\n",sel);
                imprimir_matriz(matriz);
                int cant1=0,cant2=0;
                int col;
                printf("Columna que desea contar: ");
                scanf("%i",&col);
                cant1=pos_neg(matriz,col,1);
                printf("\nLa cantidad de numeros negativos de la columna %i es %i\n",col,cant1);
                cant2=pos_neg(matriz,col,2);
                printf("\nLa cantidad de numeros positivos de la columna %i es %i\n",col,cant2);
                break;
            }
            case 6:
            {
                printf("Opción %i\n\n",sel);
                imprimir_matriz(matriz);
                float matriz_t[C][F];
                trasponer_matriz(matriz,matriz_t);
                printf("\n\nTRASPUESTA");
                imprimir_matriz(matriz_t);
                break;
            }
            case 7:
            {
                printf("\n\nHA SALIDO DEL MENÚ\n\n");
                break;
            }
            default:
            {
                printf("El número ingresado no es válido\n\n");
                break;
            }
        }
    }
    while(sel!=7);
    return;
}

int menu(int *sel)
{
    printf("\nEl menú presenta estas opciones, escriba el número de la operación que quiere realizar:");
    printf("\n(2.) Informar el promedio");
    printf("\n(3.) Informar la suma de la fila a elección");
    printf("\n(4.) Informar el producto de la diagonal principal y el de la diagonal secundaria");
    printf("\n(5.) Informar la cantidad de negativos y positivos de la columna a elección");
    printf("\n(6.) Mostrar la matriz traspuesta");
    printf("\n(7.) Salir\n\n");
    scanf("%i",sel);
    return *sel;
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

float promedio_matriz(float matriz[F][C])
{
    float prom,sum=0,n=0;
    for(int i=0;i<F;i++)
    {
        for(int j=0;j<C;j++)
        {
            n++;
            sum=sum+matriz[i][j];
        }
    }
    prom=sum/n;
    return prom;
}

float suma_fila(float matriz[F][C],int fila)
{
    float suma=0;
    if(fila<C)
    {
        for(int j=0;j<C;j++)
        {
            suma=suma+matriz[fila][j];
        }
    }
    else printf("valor de fila incorrecto");
    return suma;
}

float producto_diagonal(float matriz[F][C],int diag)
{
    int prod=1;
    switch(diag)
    {
        case 1:
        {
            for(int i=0;i<F;i++)
            {
                for(int j=i;(j<C)&&(j==i);j++)
                {
                    prod=prod*matriz[i][j];
                }
            }
            break;
        }
        case 2:
        {
            int rep=C-1;
            for(int i=0;i<F;i++)
            {
                for(int j=i;(j<C)&&(j==i);j++)
                {
                    prod=prod*matriz[i][rep];
                    rep--;
                }
            }
            break;
        }
        default:
        {
            printf("No válida la diagonal");
            break;
        }
    }
    return prod;
}

int pos_neg(float matriz[F][C],int col,int sg)
{
    int cant=0;
    if (col<C)
    {
        switch(sg)
        {
            case 1:
            {
                for(int i=0;i<F;i++)
                {
                    if(matriz[i][col]<0)
                    {
                        cant=cant+1;
                    }
                }
                return cant;
                break;
            }
            case 2:
            {
                for(int i=0;i<F;i++)
                {
                    if(matriz[i][col]>=0)
                    {
                        cant=cant+1;
                    }
                }
                return cant;
                break;
            }
        }
    }
    else printf("valor de columna no válido");
}

float trasponer_matriz(float matriz[F][C], float matriz_t[C][F])
{
    float e;
    for(int i=0;i<C;i++)
    {
        for(int j=0;j<F;j++)
        {
            e=matriz[j][i];
            matriz_t[i][j]=e;
        }
    }
    return matriz_t[C][F];
}
