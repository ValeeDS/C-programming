#include <stdio.h>
void main()
{
    float n;
    printf("Ingrese un número:\n");
    scanf("%f",&n);

    if((-2<n)&&(n<4))
    {
        printf("El número pertenece al intervalo (-2;4)");
    }
    else
    {
        printf("El número no pertenece al intervalo (-2;4)");
    }
}
