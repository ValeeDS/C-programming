#include <stdio.h>
void main()
{
	int r, P, S;
	double pi=3.1416;
	printf("Introduzca el radio:\n");
	scanf("%i",&r);
	P=2*pi*r;
	S=pi*r*r;
	printf("El perímetro es: %i\n",P);
	printf("La superficie es: %i\n",S);
	
}
