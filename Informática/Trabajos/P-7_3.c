#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *pf;
    int n,suma=0;
    pf=fopen("enteros.dat","rb");
    if (pf == NULL)
    {
        puts("Error al abrir los archivos");
        return;
    }
    else  puts("\nApertura todo Ok\n");
    while (!feof(pf))
    {
        fread(&n, sizeof(int), 1, pf);
        suma=suma+n;
    }
    printf("La suma de los números es: %i",suma);

    fclose(pf);
}
