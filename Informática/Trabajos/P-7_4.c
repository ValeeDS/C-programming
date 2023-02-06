#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *pf;
    pf=fopen("reales.dat","rb");
    if (pf == NULL)
    {
        puts("Error al abrir los archivos");
        return;
    }
    else  puts("\nApertura todo Ok\n");

    int i=0;
    float n,prod=1,num[10];
    while(!feof(pf))
    {
        fread(&n,sizeof(float),1,pf);
        num[i]=n;
        i++;
    }
    for(int i=1;i<10;i=i+2)
    {
        prod=prod*num[i];
    }
    printf("\nEl producto es: %f",prod);

    fclose(pf);
}
