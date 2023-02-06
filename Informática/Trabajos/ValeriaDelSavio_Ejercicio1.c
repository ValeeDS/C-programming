#include <stdio.h>

int menu();

void main()
{
    int vect[10], sel;
    printf("");
    do
    {
        sel=menu();
    }
    while(sel!=7);
}

int menu()
{
    int sel;
    int vect[10];
    printf("\n\nEl men� presenta estas opciones, escriba el n�mero de la operaci�n que quiere realizar:");
    printf("ACLARACION: Si es la primera opci�n que realiza debe seleccionar la (1)");
    printf("\n(1.) Cargar un vector de 10 posiciones");
    printf("\n(2.) Mostrar el vector");
    printf("\n(3.) Mostrar el vector al rev�s");
    printf("\n(4.) Informar cu�ntas veces aparece un n�mero espec�fico");
    printf("\n(5.) Cambiar un valor dentro del vector");
    printf("\n(6.) Informar la sumatoria, la productoria y la media del vector ingresado");
    printf("\n(7.) Salir\n");
    scanf("%i",&sel);
    if((sel>0)&&(sel<7))
    {
        switch(sel)
        {
            case 1:
            {
                printf("Ingrese 10 n�meros \n");
                for(int i=0;i<10;i++)
                {
                    int e;
                    scanf("%i",&e);
                    vect[i]=e;
                }
                return vect[10];
                break;
            }
            case 2:
            {
                printf("El vector ingresado es:\n^{");
                for(int i=0;i<9;i++)
                {
                    printf("%i, ",vect[i]);
                }
                printf("%i}",vect[9]);
                break;
            }
            case 3:
            {
                printf("El vector ingresado al rev�s es:\n{");
                for(int i=9;i>0;i--)
                {
                    printf("%i, ",vect[i]);
                }
                printf("%i}",vect[0]);
                break;
            }
            case 4:
            {
                int num,veces=0;
                printf("Ingrese el n�mer a buscar: ");
                scanf("%i",&num);
                for(int i=0;i<10;i++)
                {
                    if(vect[i]==num)
                    {
                        veces++;
                    }
                }
                printf("El n�mero %i aparece %i veces",num,veces);
                break;
            }
            case 5:
            {
                int pos, nuevo;
                printf("Escriba en qu� posici�n se encuentra el valor que desea cambiar (tomando el 0 como primer valor):");
                scanf("%i", &pos);
                printf("Escriba el nuevo valor");
                scanf("%i", &nuevo);
                vect[pos]=nuevo;
                return vect[10];
                break;
            }
            case 6:
            {
                float sum=0, prod=1, media=0;
                for(int i=0;i<10;i++)
                {
                    sum=sum+vect[i];
                    prod=prod*vect[i];
                }
                media=sum/10;
                printf("La suma es %f, la productoria es %f, la media es %f",sum,prod,media);
                break;
            }
        }
    }
    else
    {
        printf("El n�mero de opci�n ingresado no es correcto");
    }
    return sel;
}
