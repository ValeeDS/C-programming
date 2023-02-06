#include <stdio.h>

void main()
{
    int a,prod;
    printf("Ingrese números para calcular su producto finalizando con un negativo");
    prod=1;
    do
    {
        scanf("%i",&a);
        if(a<0)
        {
            break;
        }
        prod=prod*a;
    }
    while(a>0);
    printf("Producto; %i",prod);
}
