#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE*pf;
    pf=fopen("enteros.dat","rb");
    if (pf == NULL)
    {
        puts("Error al abrir los archivos");
        return;
    }
    else  puts("\nApertura todo Ok\n");

    int i=0,n,num[10];
    while(!feof(pf))
    {
        fread(&n,sizeof(int),1,pf);
        num[i]=n;
        i++;
    }

    for(int i=0;i>10;i++)
    {
        printf("Numero %i\n",num[i]);
    }

    int aux;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(num[i]>num[j])
            {
                aux=num[i];
                num[i]=num[j];
                num[j]=aux;
            }
        }
    }

    for(int i=0;i>10;i++)
    {
        printf("Numero %i\n",num[i]);
    }

    pf=fopen("enterosordenados.dat","wb");
    if (pf == NULL)
    {
        puts("Error al abrir los archivos");
        return;
    }
    else  puts("\nApertura todo Ok\n");
    fwrite(&num, sizeof(int), 10, pf);
    fclose(pf);

    int x;
    pf = fopen("enterosordenados.dat","rb");
    if (pf == NULL)
    {
        puts("Error al abrir los archivos");
        return;
    }
    else  puts("\nApertura LECTURA OK!!\n");
    while (!feof(pf))
    {
        fread(&x, sizeof(int), 1, pf);
        printf("\n%f", x);
    }

    fclose(pf);
}
