#include <stdio.h>

void main()
{
    int a,b,c,d,aux;
    printf("Ingrese 4 números enteros:\n");
    scanf("%i %i %i %i",&a,&b,&c,&d);
    if(b<a)
    {
        aux=a;
        a=b;
        b=aux;
    }
    if(c<a)
    {
        aux=a;
        a=c;
        c=aux;
    }
    if(d<a)
    {
        aux=a;
        a=d;
        d=aux;
    }
    if(c<b)
    {
        aux=b;
        b=c;
        c=aux;
    }
    if(d<b)
    {
        aux=b;
        b=d;
        d=aux;
    }
    if(d<c)
    {
        aux=c;
        c=d;
        d=aux;
    }
    printf("Números en orden ascendente: %i %i %i %i",a,b,c,d);
}
