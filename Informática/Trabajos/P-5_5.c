#include <stdio.h>

int menu(char cad1[], char cad2[]);
void rev(char cad[]);
int largo(char cad[]);
void maymin(char cad[]);
int same(char cad1[],char cad2[]);
void print(char cad[]);

void main()
{
    char c1[100],c2[100];
    int sel;
    printf("Ingrese dos cadenas de texto:\n");
    printf("Ingrese la primera:\n");
    gets(c1);
    printf("Ingrese la segunda:\n");
    gets(c2);
    do
    {
        sel=menu(c1,c2);
    }
    while(sel!=6);
}

int menu(char cad1[], char cad2[])
{
    int sel;
    printf("\nEl menú presenta estas opciones, escriba el número de la operación que quiere realizar:");
    printf("\n(1.) Imprimirlas del derecho y del revés");
    printf("\n(2.) Dar la longitud de las cadenas sin el NULL");
    printf("\n(3.) Imprimir las cadenas una a continuación de la otra");
    printf("\n(4.) Convertir toda la cadena a minúscula o mayúsculas");
    printf("\n(5.) Buscar una cadena dentro de la otra y avisar dónde empiezan a ser iguales");
    printf("\n(6.) Salir\n");
    scanf("%i",&sel);
    if((sel>0)&&(sel<=6))
    {
        switch(sel)
        {
            case 1:
            {
                printf("\nCadena uno del derecho: \n");
                print(cad1);
                printf("\nCadena uno del revés: \n");
                rev(cad1);
                printf("\n\nCadena dos del derecho: \n");
                print(cad2);
                printf("\nCadena dos del revés: \n");
                rev(cad2);
                break;
            }
            case 2:
            {
                int cual, l;
                printf("¿De cuál cadena desea saber su longitud? (1 o 2):");
                scanf("%i",&cual);
                switch(cual)
                {
                    case 1:
                    {
                        l=largo(cad1);
                        printf("La cadena ingresada tiene %i caracteres",l);
                        break;

                    }
                    case 2:
                    {
                        l=largo(cad2);
                        printf("La cadena ingresada tiene %i caracteres",l);
                        break;
                    }
                }
                break;
            }
            case 3:
            {
                print(cad1);
                print(cad2);
                break;
            }
            case 4:
            {
                int cual;
                printf("¿Qué cadena desea cambiar? (1 o 2):");
                scanf("%i",&cual);
                switch(cual)
                {
                    case 1:
                    {
                        maymin(cad1);
                        break;
                    }
                    case 2:
                    {
                        maymin(cad2);
                        break;
                    }
                }
                break;
            }
            case 5:
            {
                int pos;
                int l1=largo(cad1);
                int l2=largo(cad2);
                if (l1>l2)
                {
                    pos=same(cad1,cad2);
                }
                else
                {
                    pos=same(cad2,cad1);
                }
                if (pos<0)
                {
                    printf("\nNo está");
                }
                else
                {
                    if(l1<l2)
                    {
                        printf("La cadena 1: <<%s>>,",cad1);
                    }
                    else
                    {
                        printf("La cadena 2: <<%s>>,",cad2);
                    }
                    printf("está en la posición %i dentro de la otra cadena", pos);
                }
                break;
            }
        }
    }
    else
    {
        printf("El número ingresado no es válido");
    }
    return sel;
}

void print(char cad[])
{
    int i=0;
    while(cad[i]!='\0')
    {
        printf("%c",cad[i]);
        i++;
    }
}
void rev(char cad[])
{
    int c=0;
    while(cad[c]!='\0')
    {
        c++;
    }
    for(int i=(c-1);i>=0;i--)
    {
        printf("%c",cad[i]);
    }
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
    printf("%s",cad);
}
int same(char cad1[],char cad2[])
{
    int l1, l2, Hit=0, i, j, pos=0;
    l1=largo(cad1);
    l2=largo(cad2);
    for(i=0;i<=l1;i++)
    {
        if (cad1[i]==cad2[0])
        {
            pos=i;
            for(j=0;j<l2;j++,i++)
            {
                if (cad1[i]==cad2[j])
                {
                    Hit=1;
                }
                else
                {
                    Hit=0; break;
                }
            }
        }
    }
    if (Hit) return pos;
    else return -1;
}
