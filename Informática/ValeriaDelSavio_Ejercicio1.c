#include <stdio.h>

int menu(char c1[],char c2[]);
char input_string();
void maymin(char cad[]);
int largo(char cad[]);
void order(char cadena[],char cadena2[]);


void main()
{
    int sel;
    char c1[100],c2[100];
    printf("Ingrese la primera cadena para operar:\n");
    gets(c1);
    printf("Ingrese la segunda:\n");
    gets(c2);
    do
    {
        sel=menu(c1,c2);
    }
    while(sel!=6);
}

int menu(char c1[],char c2[])
{
    int sel;
    printf("\nEl menú presenta estas opciones, escriba el número de la operación que quiere realizar:");
    printf("\n(1.) Mostrar la cadena que elija en pantalla en Mayúsculas o minúsculas");
    printf("\n(2.) Imprimir las dos cadenas concatenadas");
    printf("\n(3.) Cambiar una letra de la primer cadena");
    printf("\n(4.) Ordenar una de las dos cadenas alfabéticamente de manera decreciente");
    printf("\n(5.) Qué subcadena extraer de la primer cadena");
    printf("\n(6.) Salir\n\n");
    scanf("%i",&sel);
    switch(sel)
    {
        case 1:
        {
            int cual;
            printf("¿Qué cadena desea cambiar? (1 o 2):");
            scanf("%i",&cual);
            switch(cual)
            {
                case 1:
                {
                    maymin(c1);
                    break;
                }
                case 2:
                {
                    maymin(c2);
                    break;
                }
            }
            break;
        }
        case 2:
        {
            char concat[200];
            int l1=largo(c1);
            int l2=largo(c2);
            for(int i=0;i<l1;i++)
            {
                concat[i]=c1[i];
            }
            for(int i=0;i<(l2);i++)
            {
                concat[i+l1]=c2[i];
            }
            printf("Cadenas concatenadas:\n ");
            for(int i=0;i<(l1+l2);i++)
            {
                printf("%c",concat[i]);
            }
            break;
        }
        case 3:
        {
            int pos,l1;
            char aux[1],nueva[1],c;
            l1=largo(c1);
            printf("Ingrese la letra que desea cambiar de la primer cadena:");
            fflush(stdin);
            scanf("%c",&aux[0]);
            printf("Ingrese la nueva letra:");
            fflush(stdin);
            scanf("%c",&nueva[0]);
            for(int i=0;i<l1;i++)
            {
                if(c1[i]==aux[0])
                {
                    c=nueva[0];
                    c1[i]=c;
                }
            }
            printf("La cadena que quedó es: ");
            for(int i=0;i<l1;i++)
            {
                printf("%c",c1[i]);
            }
            break;
        }
        case 4:
        {
            order(c1,c2);
            break;
        }
        case 5:
        {
            int i, f;
            printf("Indique posición inicial:\n");
            scanf("%i",&i);
            printf("Indique posición final:\n");
            scanf("%i",&f);
            printf("Subcadena: ");
            for(int j=i;j<=f;j++)
            {
                printf("%c",c1[j]);
            }
            break;
        }
        case 6:
        {
            printf("Ha salido del menú");
            break;
        }
        default:
        {
            printf("El número ingresado no es válido\n\n");
            break;
        }
    }
    return sel;
}

int largo(char cad[])
{
    int c=0;
    while(cad[c]!='\0')
    {
        c++;
    }
    return c;
}

void maymin(char cad[])
{
    int maymin;
    int l=largo(cad);
    printf("1. Mayúscula; 2. Minúscula");
    scanf("%i",&maymin);
    switch(maymin)
    {
        case 1:
        {
            for(int i=0;i<l;i++)
            {
                if((cad[i]<=122)&&(cad[i]>=97)) cad[i]=cad[i]-32;
            }
            break;
        }
        case 2:
        {
            for(int i=0;i<l;i++)
            {
                if((65<=cad[i])&&(cad[i]<=90)) cad[i]=cad[i]+32;
            }
            break;
        }
    }
    printf("%s\n",cad);
}

void order(char cadena[],char cadena2[])
{
    int sel,l1,l2;
    l1=largo(cadena);
    l2=largo(cadena2);
    printf("Seleccione que cadena ordenar:\n");
    scanf("%i",&sel);
    switch(sel)
    {

        case 1:
        {
            char ordenada[l1];
            char aux;
            for(int a=0;a<l1;a++)
            {
                ordenada[a]=cadena[a];
            }
            for(int i=0;i<l1;i++)
            {
                for(int j=i;j<l1;j++)
                {
                    if(ordenada[j]<ordenada[i])
                    {
                        aux=ordenada[i];
                        ordenada[i]=ordenada[j];
                        ordenada[j]=aux;
                    }
                }
            }
            for(int i=l1-1;i>=0;i--)
            {
                printf("%c",ordenada[i]);
            }
            break;
        }
        case 2:
        {
            char ordenada[l2];
            char aux;
            for(int a=0;a<l1;a++)
            {
                ordenada[a]=cadena2[a];
            }
            for(int i=0;i<l1;i++)
            {
                for(int j=i;j<l1;j++)
                {
                    if(ordenada[j]<ordenada[i])
                    {
                        aux=ordenada[i];
                        ordenada[i]=ordenada[j];
                        ordenada[j]=aux;
                    }
                }
            }
            for(int i=l2-1;i>=0;i--)
            {
                printf("%c",ordenada[i]);
            }
            break;
        }
    }
 }
