#include <stdio.h>
#define F 3
#define C 3

void main ()
{
    float m[F][C];
	int f,c;
	FILE *pf;

	for(f=0;f<F;f++)
	{
		for(c=0;c<C;c++)
		{
			printf ("Ingrese el valor para m[%i][%i]: ",f,c);
			scanf ("%f", &m[f][c]);
		}
	}

	pf=fopen("matriz.dat", "wb");
	if(pf == NULL)
	{
		printf("Error al abrir");
	}
    else printf("Apertura ok");
    fwrite (&m, sizeof m[0][0], F*C, pf);

	printf("Tamaño de archivo: %d\nTamaño de un elemento: %d",sizeof(pf),sizeof(m[0][0]));

	fclose(pf);
}
