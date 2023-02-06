#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    FILE *pf;
    float x;
    pf = fopen("reales.dat","wb");
    if (pf == NULL)
    {
        puts("Error al abrir los archivos");
        return;
    }
    else  puts("\nApertura todo Ok\n");
    for (int i = 0; i < 10;i++)
    {
        printf("Número %i:",i);
        scanf("%f",&x);
        fwrite(&x, sizeof(float), 1, pf);
    }
    fclose(pf);
    pf = fopen("reales.dat","rb");
    if (pf == NULL)
    {
        puts("Error al abrir los archivos");
        return;
    }
    else  puts("\nApertura NUM LECTURA OK!!\n");
    while (!feof(pf))
    {
        fread(&x, sizeof(float), 1, pf);
        printf("\nNumero %f", x);
    }
    puts("\nFIN NUM LECTURA OK!!\n");
    printf("El fichero contiene %d bytes\n",ftell(pf));
    printf("Debería tener %d\n",10*sizeof(float));
    fclose(pf);
}
