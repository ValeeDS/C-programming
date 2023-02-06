#include <stdio.h>

void order(char cadena[]);
/*Reemplazar por función largo*/

void main()
{
    char texto[100];
    gets(texto);
    order(texto);
}

void order(char cadena[])
{
    char ordenada[4];
    char aux;
    for(int a=0;a<4;a++)
    {
        ordenada[a]=cadena[a];
    }
    for(int i=0;i<4;i++)
    {
        for(int j=i;j<4;j++)
        {
            if(ordenada[j]<ordenada[i])
            {
                aux=ordenada[i];
                ordenada[i]=ordenada[j];
                ordenada[j]=aux;
            }
        }
    }
    for(int i=0;i<4;i++)
    {
        printf("%c",ordenada[i]);
    }
 }
