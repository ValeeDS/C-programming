#include <stdio.h>

void main()
{
    int vector[10], max=0;
    printf("Ingrese 10 n�meros:\n");
    for(int i=0; i<10; i++)
    {
        int e;
        scanf("%i",&e);
        vector[i]=e;
        if(e>max)
        {
            max=e;
        }
    }
    printf("\nEl valor m�ximo es: %i",max);
}
