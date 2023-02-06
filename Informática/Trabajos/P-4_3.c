#include <stdio.h>
#include <math.h>

double angulo(float base,float altura,float hipotenusa,int funcion);

void main()
{
    float b=3, h=4, hip=5;
    double base, high;
    base=angulo(b,h,hip,1);
    high=angulo(b,h,hip,2);
    printf("El ángulo adyacente a la base es %d",base);
    printf("El ángulo opuesto es %d",high);
}

double angulo(float base,float altura,float hipotenusa,int funcion)
{
    double a=0,c=0;
    if(funcion==1)
    {
        c=(base/hipotenusa);
        a=asin(c);
    }
    if(funcion==2)
    {
        c=base/hipotenusa;
        a=acos(c);
    }
    return a;
}
