#include <stdio.h>
void main()
{
    float b,h,d,st,sc;
    double pi=3.141592654;
    printf("Ingrese el valor de la base y la altura\n");
    scanf("%f %f",&b,&h);
    printf("Ingrese el valor del diámetro de la circunferencia:\n");
    scanf("%f",&d);
    st=(b*h)/2;
    sc=pi*(d/2)*(d/2);

    if (st>sc)
    {
        printf("El triángulo tiene mayor superficie");
    }
    else
    {
        printf("La circunferencia tiene mayor superficie");
    }
}
