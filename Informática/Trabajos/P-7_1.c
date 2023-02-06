#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    FILE *pf;
    int n;
    pf = fopen("enteros.dat","wb");
    if (pf == NULL)
    {
        puts("Error al abrir los archivos");
        return;
    }
    else  puts("\nApertura todo Ok\n");
    for (int i = 0; i < 10;i++)
    {
        printf("Número %i:",i);
        scanf("%i",&n);
        fwrite(&n, sizeof(int), 1, pf);
    }
    fclose(pf);
    pf = fopen("enteros.dat","rb");
    if (pf == NULL)
    {
        puts("Error al abrir los archivos");
        return;
    }
    else  puts("\nApertura Ok\n");
    while (!feof(pf))
    {
        fread(&n, sizeof(int), 1, pf);
        printf("\nNumero %i", n);
    }
    puts("\nLectura Correcta\n");
    printf("El fichero contiene %d bytes\n",ftell(pf));
    printf("Debería tener %d\n",10*sizeof(int));
    fclose(pf);
}
