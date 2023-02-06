#include <stdio.h>

void main()
{
    long int N,i;
    long int prod,fact;
    printf("Ingrese un número para calcular el factorial:\n");
    scanf("%i",&N);
    prod=1;
    for(i=1;i<=N;i++)
    {
        prod=prod*i;
        printf("\n(%i) producto acumulado: %i",i,prod);
    }
    printf("\nEl factorial de %i es: %i",N,fact);
}
