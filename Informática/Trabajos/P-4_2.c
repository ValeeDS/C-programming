#include <stdio.h>

void clasLados(float a, float b, float c);

void main()
{
    float a,b,c;
    int correct;
    do
    {
        printf("Ingrese los valores de los lados a, b y c:\n");
        scanf("%f" "%f" "%f",&a,&b,&c);
        printf("Los valores que ingresó son:\na=%f\nb=%f\nc=%f",a,b,c);
        printf("\nSi son correctos presione 1, de lo contrario presione 0");
        scanf("%i",&correct);
        while((correct!=1)&&(correct!=0))
        {
            printf("\nComando no válido. Ingrese de nuevo: ");
            scanf("%i",&correct);
        }
    }
    while(correct==0);
    clasLados(a,b,c);
}

void clasLados(float a, float b, float c)
{
    int t;
    if((a==b)&&(a==c)) t=1;
    else if((a==b)&&(c!=a)) t=2;
    else if((a==c)&&(b!=a)) t=2;
    else if((b==c)&&(a!=b)) t=2;
    else if((a!=b)&&(a!=c)) t=3;
    switch(t)
    {
        case 1:
        {
            printf("El triángulo es equilátero");
            break;
        }
        case 2:
        {
            printf("El triángulo es isósceles");
            break;
        }
        case 3:
        {
            printf("El triángulo es escaleno");
            break;
        }
    }
}
