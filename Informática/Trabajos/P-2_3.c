#include <stdio.h>
void main()
{
    float n;
    printf("Ingrese un n�mero:\n");
    scanf("%f",&n);

    if((-2<n)&&(n<4))
    {
        printf("El n�mero pertenece al intervalo (-2;4)");
    }
    else
    {
        printf("El n�mero no pertenece al intervalo (-2;4)");
    }
}
