#include <stdio.h>
#include <stdlib.h>
#define F 3
#define C 3

int menu(int*sel);
void imprimir_matriz(float matriz[F][C]);
float cambiar_valor(int fila,int col,float valor,float matriz[F][C]);

void main()
{
    FILE*pf;
    pf=fopen("matriz.dat","rb");
    if(pf==NULL)
    {
        printf("Error al abrir archivo");
        return;
    }
    else printf("\nAPERTURA CORRECTA\n");

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
                printf("Cargando matriz\n");
                int f=0,c=0;
                float n;
                while(!feof(pf))
                {
                    for(int f=0;f<F;f++)
                    {
                        for(int c=0;c<C;c++)
                        {
                            fread(&n,sizeof(matriz[0][0]),1, pf);
                            matriz[f][c]=n;
                        }
                    }
                    break;
                }

                for(int f=0;f<F;f++)
                {
                    for(int c=0;c<C;c++)
                    {
                        printf("m[%i][%i]: %f\n",f,c,matriz[f][c]);
                    }
                }

                printf("\nCarga finalizada\n");
                fclose(pf);
                printf("Archivo cerrado");
                break;
            }
            case 2:
            {
                printf("Opción %i\n\n",sel);
                imprimir_matriz(matriz);
                break;
            }
            case 3:
            {
                int fila,col;
                float valor;
                printf("Opción %i\n\n",sel);
                printf("Ingrese fila y columna del valor a cambiar");
                scanf("%i %i",&fila,&col);
                printf("Ingrese el nuevo valor");
                scanf("%f",&valor);
                cambiar_valor(fila,col,valor,matriz);
                imprimir_matriz(matriz);
                break;
            }
            case 4:
            {
                printf("Opción %i\n\n",sel);
                float n;
                FILE*pf;
                pf=fopen("matriz.dat","rb");
                if(pf==NULL)
                {
                    printf("Error al abrir archivo");
                    return;
                }
                else printf("\nAPERTURA CORRECTA\n");
                printf("Los datos en el archivo son:\n");
                while(!feof(pf))
                {
                    for(int f=0;f<F;f++)
                    {
                        for(int c=0;c<C;c++)
                        {
                            fread(&n,sizeof(matriz[0][0]),1, pf);
                            printf(" %f ",n);
                        }
                    }
                    break;
                }
                printf("\n");
                fclose(pf);
                break;
            }
            case 5:
            {
                printf("Opción %i\n\n",sel);
                FILE*pf;
                pf=fopen("matriz.dat","wb");
                if(pf==NULL)
                {
                    printf("Error al abrir archivo");
                    return;
                }
                else printf("\nAPERTURA CORRECTA\n");
                fwrite(&matriz, sizeof(matriz[0][0]),F*C, pf);
                printf("\nEscritura finalizada\n");
                break;
            }
            case 6:
            {
                printf("\n\nHA SALIDO DEL MENÚ\n\n");
                break;
            }

            default:
            {
                printf("El número ingresado no es válido\n");
                break;
            }
        }
    }
    while(sel!=6);
    return;
}

int menu(int*sel)
{
    printf("\nEl menú presenta estas opciones, escriba el número que quiere realizar:");
    printf("\n(1.) Leer en una matriz de 3x3 el archivo matriz.dat");
    printf("\n(2.) Mostrar la matriz en pantalla");
    printf("\n(3.) Cambiar el valor de la matriz(posición definida por el usuario)");
    printf("\n(4.) Mostrar los valores del archivo en pantalla");
    printf("\n(5.) Guardar la matriz en el archivo");
    printf("\n(6.) Salir\n\n");
    scanf("%i",sel);
    return *sel;
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

float cambiar_valor(int fila,int col,float valor,float matriz[F][C])
{
    float a;
    a=valor;
    matriz[fila][col]=a;
    return matriz[F][C];
}

