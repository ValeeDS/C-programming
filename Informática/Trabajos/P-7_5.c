#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE*pf;
    pf=fopen("reales.dat","rb");
    if (pf == NULL)
    {
        puts("Error al abrir los archivos");
        return;
    }
    else  puts("\nApertura todo Ok\n");

    int i=0;
    float n,num[10];
    while(!feof(pf))
    {
        fread(&n,sizeof(float),1,pf);
        num[i]=n;
        i++;
    }

    for(int i=2;i<10;i=i+2)
    {
        float aux;
        printf("Valor nuevo para %i: ",i);
        scanf("%f",&aux);
        num[i]=aux;
    }

    pf=fopen("reales2.dat","wb");
    if (pf == NULL)
    {
        puts("Error al abrir los archivos");
        return;
    }
    else  puts("\nApertura todo Ok\n");
    fwrite(&num, sizeof(float), 10, pf);
    fclose(pf);

    float x;
    pf = fopen("reales2.dat","rb");
    if (pf == NULL)
    {
        puts("Error al abrir los archivos");
        return;
    }
    else  puts("\nApertura LECTURA OK!!\n");
    while (!feof(pf))
    {
        fread(&x, sizeof(float), 1, pf);
        printf("\n%f", x);
    }

    fclose(pf);
}
