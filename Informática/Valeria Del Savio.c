#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu(int*sel);
void imp_cad(char cad[]);
int same(char Larga[], char Corta[]);


void main()
{
    FILE*pf;
    pf=fopen("parcial.txt","wt");
    if(pf==NULL)
    {
        printf("Error al abrir archivo");
        return;
    }
    else printf("\nAPERTURA CORRECTA\n");
    int sel;

    char cad[100];
    char arch[100];
    char c;
    do
    {
        menu(&sel);
        switch(sel)
        {
            case 1:
            {
                char c;
                printf("Opci�n %i\n\n",sel);
                printf("Ingrese la cadena:\n");
                fflush(stdin);
                gets(cad);
                break;
            }
            case 2:
            {
                char cad2[1]="\n";
                printf("Opci�n %i\n\n",sel);
                printf("Guardando en archivo");
                fseek(pf,0,SEEK_END);
                fwrite(&cad,strlen(cad),1,pf);
                fwrite(&cad2,sizeof(char),1,pf);
                printf("\n\nLISTO\n\n");
                break;
            }
            case 3:
            {
                printf("Opci�n %i\n\n",sel);
                fclose(pf);
                FILE *pf;
                pf=fopen("parcial.txt","rt");
                int i=0;
                char c;
                while(!feof(pf))
                {
                    fgets(arch,100,pf);
                    break;
                }
                printf("%s",arch);
                fclose(pf);
                break;
            }
            case 4:
            {
                printf("Opci�n %i\n\n",sel);
                printf("Cadena a buscar: ");
                char corta[50];
                int pos;
                fflush(stdin);
                gets(corta);
                pos=same(arch,corta);
                printf("La cadena est� en la posici�n %i",pos);
                break;
            }
            case 5:
            {
                printf("Opci�n %i\n\n",sel);
                break;
            }
            case 6:
            {
                printf("Opci�n %i\n\n",sel);
                break;
            }
            case 7:
            {
                printf("Opci�n %i\n\n",sel);
                break;
            }
            case 8:
            {
                printf("\n\nHA SALIDO DEL MEN�\n\n");
                break;
            }

            default:
            {
                printf("El n�mero ingresado no es v�lido\n");
                break;
            }
        }
    }
    while(sel!=8);
    fclose(pf);
    return;
}

int menu(int*sel)
{
    printf("\nEl men� presenta estas opciones, escriba el n�mero que quiere realizar:");
    printf("\n(1.) Leer desde el teclado una o m�s cadenas terminando con enter");
    printf("\n(2.) Guardar en el disco a1 final del archivo");
    printf("\n(3.) Mostrar contenido del archivo");
    printf("\n(4.) Pedir una palabra y mostrar donde esta");
    printf("\n(5.) Pedir una palabra y contar la cantidad");
    printf("\n(6.) Reemplazar una palabra");
    printf("\n(7.) Formateo");
    printf("\n(8.) Salir\n\n");
    scanf("%i",sel);
    return *sel;
}

void imp_cad(char cad[])
{
    for(int i=0;i<strlen(cad);i++)
    {
        printf("%c",cad[i]);
    }
}


int same(char Larga[], char Corta[])
{
    int l1, l2, Hit=0, i, j, pos=0;
    l1=strlen(Larga);
    l2=strlen(Corta);

    for(i=0;i<=l1;i++)
    {
        if (Larga[i]==Corta[0])
        {
            pos=i;
            for(j=0;j<l2;j++, i++)
            {
                if (Larga[i]==Corta[j]) Hit=1;

                else {Hit=0; break;}
            }
        }
    }
    if (Hit) return pos;
    else return -1;
}
