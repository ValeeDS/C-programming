#include <stdio.h>
void main()
{
    int n,r;
    printf("Ingrese un número:\n");
    scanf("%i",&n);
    r=n%7;
    if(0<r>0)
    {
        printf("El número %i no es múltiplo de 7",n);
    }
    else
    {
        printf("El número %i es múltiplo de 7",n);
    }
}
