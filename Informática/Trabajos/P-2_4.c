#include <stdio.h>
void main()
{
    int n,r;
    printf("Ingrese un n�mero:\n");
    scanf("%i",&n);
    r=n%7;
    if(0<r>0)
    {
        printf("El n�mero %i no es m�ltiplo de 7",n);
    }
    else
    {
        printf("El n�mero %i es m�ltiplo de 7",n);
    }
}
