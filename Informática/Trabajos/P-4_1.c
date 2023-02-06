#include <stdio.h>

void existetriangulo(float a,float b, float c);

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
    existetriangulo(a,b,c);
}

void existetriangulo(float a, float b, float c)
{
    int t;
    if((a+b)>c) t=1;
    else if((a+c)>b) t=1;
    else if((b+c)>c) t=1;
    else t=0;
    switch(t)
    {
        case 0:
        {
            printf("No existe triángulo");
        }
        case 1:
        {
            printf("Existe triángulo");
        }
    }
}
