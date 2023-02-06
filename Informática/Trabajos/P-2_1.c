#include <stdio.h>
void main()
{
    float a,b,r;
    printf("Introduzca a:\n");
    scanf("%f",&a);
    printf("Introduzca b:\n");
    scanf("%f",&b);
    if (a<b)
    {
        r=a*b;
    }
    else
    {
        r=a/b;
    }
    printf("El resultado es: %f\n",r);
}
