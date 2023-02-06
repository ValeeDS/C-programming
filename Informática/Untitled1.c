#include<stdio.h>
#include<stdlib.h>
#define Filas 3
#define Columnas 3

int Menu(int *opcion);
void Suma(int Vec[Filas][Columnas],int fila);
void Posicion(int Vec[Filas][Columnas],int columna);
void Cargar(int Vec[Filas][Columnas],int fila,int columna);


void main()
{
	int Vec[Filas][Columnas];
	int fila,columna,opcion;
	char archivo[]= "Alumnos.dat";
	char archivomod[]= "Alumnos.dat";
	FILE* ptr;
	FILE *ptrmod;
	ptr=fopen(archivo,"r+t");
	if(ptr==NULL)
	{
		puts("Error al abrir el archivo\n");
	}
	else
	{
		puts("El archivo se ha abierto correctamente");
		fread(Vec,sizeof(int),9,ptr);
		for(fila=0;fila<Filas;fila++)
		{
			for(columna=0;columna<Columnas;columna++)
			{
				printf("El elemento [%i][%i] de la matriz es:%i\n", fila, columna, Vec[fila][columna]);
			}
		}
	}
	fclose(ptr);


	do{
        Menu(&opcion);
        switch(opcion)
        {
            case 1:

                printf("\n Ingrese que fila desea sumar: \n");
                scanf("%i",&fila);
                Suma(Vec,fila);

                break;

            case 2:

                printf("\n Ingrese que columna desea ver el max y minimo: \n");
                scanf("%i",&columna);
                Posicion(Vec,columna);
                break;

            case 3:
                Cargar(Vec,fila,columna);
                ptrmod=fopen(archivomod,"wt");
                if(ptrmod==NULL)
                {
                    puts("Error al abrir el archivo\n");
                }
                else
                {
                    puts("El archivo se ha abierto correctamente");
                    for(fila=0;fila<Filas;fila++)
                    {
                        for(columna=0;columna<Columnas;columna++)
                        {
                            printf("El elemento [%i][%i] de la matriz es:%i\n", fila, columna, Vec[fila][columna]);
                        }
                    }
                    fwrite(Vec,sizeof(int),9,ptrmod);
                }
                fclose(ptr);
                break;

            case 4:
                {   int mult=1;
                    for(fila=0;fila<Filas;fila++)
                    {
                        for(columna=0;columna<Columnas;columna++)
                        {
                            if (Vec[fila][columna]<0) mult*=Vec[fila][columna];                        }
                    }
                    printf("El Producto de Los Negativos es:%i\n", mult);

                }
                break;
        }
	}
	while(opcion<5);
	return;
}

int Menu(int *opcion)
{

	printf("El Menu presenta 4 opciones:\n");
	printf("1. Calcular la sumatoria de una fila\n");
	printf("2. Informar el Maximo y el Minimo de una columna\n");
	printf("3. Cargar nuevos numeros a la matriz\n");
	printf("4. Producto de todos los numeros negativos de la matriz\n");
	printf("5. Salir\n");
	printf("Elija....:\n");
	scanf("%i",opcion);
	return *opcion;
}

void Suma(int Vec[Filas][Columnas],int fila)
{
	int suma=0,columna=0, i;
	for(i=fila;i<=fila;i++)
	{
		for(columna=0;columna<Columnas;columna++)
		{
			suma+=Vec[i][columna];
		}
	}
	printf("La suma de la fila que ingreso es:%i\n",suma);
	return;
}

void Posicion(int Vec[Filas][Columnas],int columna)
{
	int maximo=0,minimo=Vec[0][columna],filas=0,fila=0 ,columnas=0,filas1=0,columnas1=0,j;
	for(fila=0;fila<Filas;fila++)
	{
		if (Vec[fila][columna]>maximo)
			{
				maximo=Vec[fila][columna];
				filas=fila;
				columnas=j;
			}
        if (Vec[fila][columna]<minimo)
			{
				minimo=Vec[fila][columna];
				filas1=fila;
				columnas1=j;
			}
		}

	printf("El numero maximo ingresado de la matriz en la [%i][%i] posicion es:%i\n",filas,columna,maximo);
	printf("El numero minimo ingresado de la matriz en la [%i][%i] posicion es:%i\n",filas1,columna,minimo);
	return;
}

void Cargar(int Vec[Filas][Columnas],int fila,int columna)
{
	int A2,M2;
	printf("Indique la fila de la cual quiere modificar el valor:\n");
	scanf("%i",&A2);
	printf("Indique la columna de la cual quiere modificar el valor:\n");
	scanf("%i",&M2);
	for(fila=0;fila<Filas;fila++)
	{
		for(columna=0;columna<Columnas;columna++)
		{
			if((A2==fila) && (M2==columna))
			{
				printf("Ingrese el nuevo valor para el [%i][%i] elemento:\n",A2,M2);
				scanf("%i",&Vec[fila][columna]);
			}
		}
	}
	return;
}
