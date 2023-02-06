#include <stdio.h>

void main()
{
    int vector[101],prod=1,i=0,e;
    printf("Ingrese no más de 100 números para calcular su producto (finalice con un negativo):\n");
    do
    {
        scanf("%i",&e);
        vector[i]=e;
        i++;
    }
    while (e>0);
    for(int j=0;j<i-1;j++)
    {
        prod=prod*vector[j];
    }
    printf("\nEl producto es: %i",prod);
}
