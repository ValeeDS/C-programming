#include <stdio.h>

void main()
{
    int nota,i;
    float media;
    printf("Introduzca las notas del alumno (hasta 4 entre 0 y 100):\n");
    i=1;
    int suma=0;
    do
    {
        scanf("%i",&nota);
        suma=suma+nota;
        i++;
    }
    while(i<=4);
    media=suma/4.0;
    printf("La media es %f, que corresponde a la categoría: ",media);
    if((90.0<=media)&&(media<=100.0))
    {
        printf("A");
    }
    else if((80.0<=media)&&(media<90.0))
    {
        printf("B");
    }
    else if ((70.0<=media)&&(media<80.0))
    {
        printf("C");
    }
    else if ((60.0<=media)&&(media<70.0))
    {
        printf("D");
    }
    else
    {
        printf("E");
    }
}
