#include <stdio.h>

void main()
{
    int num;
    printf("Ingresar un número del 0 al 10\n");
    scanf("%i",&num);
    switch(num)
    {
        case 0:
            printf("0: Cero");
            break;
        case 1:
            printf("1: Uno");
            break;
        case 2:
            printf("2: Dos");
            break;
        case 3:
            printf("3: Tres");
            break;
        case 4:
            printf("4: Cuatro");
            break;
        case 5:
            printf("5: Cinco");
            break;
        case 6:
            printf("6: Seis");
            break;
        case 7:
            printf("7: Siete");
            break;
        case 8:
            printf("8: Ocho");
            break;
        case 9:
            printf("9: Nueve");
            break;
        case 10:
            printf("10: Diez");
            break;
    }
}
