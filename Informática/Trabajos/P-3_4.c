#include <stdio.h>

void main()
{
    int a,sum,i,m;
    printf("Ingrese números para sumar finalizando con un cero:\n");
    sum=0;
    i=0;
    m=0;
    do
    {
        scanf("%i",&a);
        if(a==0)
        {
            break;
        }
        i++;
        if((a%3)==0)
        {
            m++;
        }
        sum=sum+a;
    }
    while(a!=0);
    printf("La suma es: %i. Se ingresaron %i números, de los cuales %i son múltiplos de 3",sum,i,m);
}
