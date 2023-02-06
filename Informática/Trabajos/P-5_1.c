#include <stdio.h>

void main()
{
    int vector[10], sum=0;
    float prom;
    printf("Ingrese 10 números (1 por renglón):\n");
    for(int i=0;i<10;i++)
    {
        int e;
        scanf("%i",&e);
        vector[i]=e;
        sum=sum+e;
    }
    prom=sum/10.0;
    printf("El promedio es: %f",prom);
}
