#include <stdio.h>

void main()
{
    int N;
    printf("Ingrese un número entero:\n");
    scanf("%i",&N);
    if(N==0)
    {
        printf("El número ingresado es igual a cero");
    }
    else
    {
        printf("El número es:");
        if(N<0)
        {
            printf("\n- Negativo");
        }
        else
        {
            printf("\n- Positivo");
        }
        if((N%2)==0)
        {
            printf("\n- Par");
        }
        else
        {
            printf("\n- Impar");
        }
        int i=2;
        while(i<N)
        {
            int r;
            r=N%i;
            i++;
            if(r==0)
            {
                printf("\n- Compuesto");
                break;
            }
        }
        if(i==N)
        {
            printf("\n- Primo");
        }
    }
}
