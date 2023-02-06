#include <stdio.h>

void main()
{
    int sum,a;
    float prom;
    printf("Ingrese diez números:\n");
    int i;
    sum=0;
    prom=0.0;
    for(i=1;i<=10;i++)
    {
        printf("Número %i: ",i);
        scanf("%i",&a);
        sum=sum+a;
    }
    prom=sum/10.0;
    printf("\nPromedio: %f",prom);
}
