#include <stdio.h>

void main()
{
    int a,b,c;
    printf("Ingrese tres n�meros:\n");
    scanf("%i %i %i",&a,&b,&c);
    if(a+b==c)
    {
        printf("%i es la suma de %i y %i",c,a,b);
    }
    else if(a+c==b)
    {
        printf("%i es la suma de %i y %i",b,a,c);
    }
    else if(b+c==a)
    {
        printf("%i es la suma de %i y %i",a,b,c);
    }
    else
    {
        printf("No existe relaci�n de suma entre los n�meros");
    }
}
