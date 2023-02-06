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
                printf("Opción %i\n\n",sel);
                break;
            }
            case 2:
            {
                printf("Opción %i\n\n",sel);
                break;
            }
            case 3:
            {
                printf("Opción %i\n\n",sel);
                break;
            }
            case 4:
            {
                printf("Opción %i\n\n",sel);
                break;
            }
            case 5:
            {
                printf("Opción %i\n\n",sel);
                break;
            }
            case 6:
            {
                printf("Ha salido del menú");
                break;
            }
            default:
            {
                printf("El número ingresado no es válido\n\n");
                break;
            }
        }
    }
    while(sel!=6);
}

int menu()
{
    int sel;
    printf("El menú presenta estas opciones, escriba el número de la operación que quiere realizar:");
    printf("\n(1.) ");
    printf("\n(2.) ");
    printf("\n(3.) ");
    printf("\n(4.) ");
    printf("\n(5.) ");
    printf("\n(6.) Salir\n\n");
    scanf("%i",&sel);
    return sel;
}

