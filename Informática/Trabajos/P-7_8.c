#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu(int*sel);
char leer_cadena(char cad[]);

void main()
{
    char cad[100];
    int sel;
    do
    {
        menu(&sel);
        switch(sel)
        {
            case 1:
            {
                printf("Opci�n %i\n\n",sel);
                leer_cadena(cad);
                break;
            }
            case 2:
            {
                printf("Opci�n %i\n\n",sel);
                break;
            }
            case 3:
            {
                printf("Opci�n %i\n\n",sel);
                break;
            }
            case 4:
            {
                printf("Opci�n %i\n\n",sel);
                break;
            }
            case 5:
            {
                printf("Opci�n %i\n\n",sel);
                break;
            }
            case 6:
            {
                printf("Opci�n %i\n\n",sel);
                break;
            }
            case 7:
            {
                printf("Opci�n %i\n\n",sel);
                break;
            }
            case 8:
            {
                printf("\n\nHA SALIDO DEL MEN�\n\n");
                break;
            }

            default:
            {
                printf("El n�mero ingresado no es v�lido\n");
                break;
            }
        }
    }
    while(sel!=8);
    return;
}

int menu(int*sel)
{
    printf("\nEl men� presenta estas opciones, escriba el n�mero que quiere realizar:");
    printf("\n(1.) Leer desde el teclado un conjunto de cadenas terminado con entres");
    printf("\n(2.) Mostrar en pantalla la cadena le�da");
    printf("\n(3.) Guardar el p�rrafo en el disco");
    printf("\n(4.) Agregar al arrchivo, un nuevo p�rrafo le�do en el punto 1");
    printf("\n(5.) Leer del disco el texto del archivo, si existiese");
    printf("\n(6.) Contar la cantidad de palabras");
    printf("\n(7.) Pedir una cadena y buscar todas sus apariciones en el texto del archivo");
    printf("\n(8.) Salir\n\n");
    scanf("%i",sel);
    return *sel;
}

char leer_cadena(char cad[]);
{
    printf("Ingrese su cadena: ");
    gets(cad);
}
