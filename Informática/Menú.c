#include <stdio.h>

int menu();

void main()
{
    int sel;
    char texto[];
    do
    {
        menu(&sel);
        switch(sel)
        {
            case 1:
            {
                printf("Opci�n %i\n\n",sel);
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
                printf("Ha salido del men�");
                break;
            }
            default:
            {
                printf("El n�mero ingresado no es v�lido\n\n");
                break;
            }
        }
    }
    while(sel!=6);
}

int menu()
{
    int sel;
    printf("El men� presenta estas opciones, escriba el n�mero de la operaci�n que quiere realizar:");
    printf("\n(1.) ");
    printf("\n(2.) ");
    printf("\n(3.) ");
    printf("\n(4.) ");
    printf("\n(5.) ");
    printf("\n(6.) Salir\n\n");
    scanf("%i",&sel);
    return sel;
}

