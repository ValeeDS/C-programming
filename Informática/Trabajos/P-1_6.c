#include <stdio.h>
void main()
{
	int h, m, t;
	printf("Introduzca la hora:\n");
	scanf("%i",&h);
	printf("Introduzca los minutos:\n");
	scanf("%i",&m);
	t=m+(h*60);
	printf("Los minutos totales son: %i\n",t);
	
}
