#include <stdio.h>
#define F 3
#define C 3


int main (){
	int m [F][C];
	int f,c,n,prod=1,ret=0;
	FILE *arch;

	arch=fopen("matriz.dat", "r");
	if(arch != NULL){
		n = fread (m, sizeof m[0][0], F*C, arch);
		if(n!= F*C){
			printf("Error al leer");
			ret=-1;
		}
		else {
                for(f=0;f<F;f++)
                    for(c=0;c<C;c++)
                        printf ("\n m[%d][%d]: %i",f,c, m[f][c]);
//                        m[f][c]=

                for(f=0;f<F;f++)
                    prod = prod * m[f][f];
                printf("\nEl producto de la diag ppal es: %d\n", prod);
            }

		if( fclose(arch)!=0){
			printf("Error al cerrar");
			ret=-2;
		}
	}
	else {
		printf("Error al abrir el archivo");
		ret=-3;
	}

   return ret;
}
