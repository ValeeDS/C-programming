#include <stdio.h>

char input_string(char texto[]);

void main()
{
    char texto[10];
    input_string(texto);
}

char input_string(char texto[])
{
    printf("Ingrese la cadena:\n");
    int i=0;
    while(texto[i]!='\0')
    {
        scanf("%c",&texto[i]);
    }
    printf("Listo");
}
