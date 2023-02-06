#include <stdio.h>

int menu();
float sumar(float A,float B);
float restar(float A,float B);
float multiplicar(float A,float B);
float dividir(float A,float B);

void main()
{
    int sel;
    do
    {
        sel=menu();
    }
    while (sel!=5);
    return;
}

int menu()
{
    int sel;
    printf("El menú presenta estas opciones, escriba el número de la operación que quiere realizar:");
    printf("\n(1.) Sumar");
    printf("\n(2.) Restar");
    printf("\n(3.) Multiplicar");
    printf("\n(4.) Dividir");
    printf("\n(5.) Salir\n");
    scanf("%i",&sel);
    if((sel>0)&&(sel<5))
    {
        float r,A,B;
        char op[20];
        printf("\nIngrese el primer número: ");
        scanf("%f",&A);
        printf("Ingrese el segundo número: ");
        scanf("%f",&B);
        switch(sel)
        {
            case 1:
                r=sumar(A,B);
                char sum[20]="Sumar";
                for(int i=0;i<20;i++)
                {
                    op[i]=sum[i];
                }
                break;
            case 2:
                r=restar(A,B);
                char res[20]="Restar";
                for(int i=0;i<20;i++)
                {
                    op[i]=res[i];
                }
                break;
            case 3:
                r=multiplicar(A,B);
                char mult[20]="Multiplicar";
                for(int i=0;i<20;i++)
                {
                    op[i]=mult[i];
                }
                break;
            case 4:
                r=dividir(A,B);
                char div[20]="Dividir";
                for(int i=0;i<20;i++)
                {
                    op[i]=div[i];
                }
                break;
        }
        printf("\nEl resultado de %s %f y %f es: %f\n\n",op,A,B,r);
    }
    else
    {
        printf("El número ingresado no es válido");
    }
    return sel;
}

float sumar(float A,float B)
{
    float r=0;
    r=A+B;
    return r;
}

float restar(float A,float B)
{
    float r=0;
    r=A-B;
    return r;
}

float multiplicar(float A,float B)
{
    float r;
    r=A*B;
    return r;
}

float dividir(float A,float B)
{
    float r;
    r=A/B;
    return r;
}

