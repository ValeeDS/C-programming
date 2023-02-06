#include <stdio.h>

void change_char(char cad[]);

void main()
{
    char texto[4]="Hola";
    change_char(texto);
}

void change_char(char cad[])
{
    int pos;
    char nuevo[100];
    printf("Escriba en qué posición se encuentra el valor que desea cambiar (tomando el 0 como primer valor):");
    scanf("%i", &pos);
    printf("Escriba el nuevo valor:\n");
    gets(nuevo);
    cad[pos]=nuevo[0];
    printf("\nLa nueva cadena es:\n");
    for(int i=0;i<4;i++)
    {
        printf("%c",cad[i]);
    }
    return cad;
}
