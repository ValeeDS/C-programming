#include <stdio.h>

void main()
{
    int max,i;
    printf("Ingrese diez números:\n");
    i=1;
    max=0;
    do
    {
        int n;
        printf("(%i). ",i);
        scanf("%i",&n);
        if(max<n)
        {
            max=n;
        }
        i++;
    }
    while(i<=10);
    printf("El número máximo ingresado fue: %i",max);
}
