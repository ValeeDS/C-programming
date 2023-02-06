#include <stdio.h>


void main()
{
    int N;
    float med=0.0 ,var=0.0 ,des=0.0 ,freq=0.0;
    printf("Indique el valor de N (cantidad de elementos): ");
    scanf("%i",&N);
    int vector[N];
    printf("Ingrese su vector de %i elementos\n",N);
    for(int i=0;i<N;i++)
    {
        int e;
        scanf("%i",&e);
        vector[i]=e;
    }
    for(int i=0;i<N;i++)
    {
        med=med+vector[i];
    }
    med=med/N;
    for(int i=0;i<N;i++)
    {
        int e=vector[i];
        var=var+((e-med)*(e-med));
    }
    var=var/N;
    des=sqrt(var);
    printf("\nMedia: %f\nVeriación: %f\nDesvío: %f\nFrecuencias:\n",med,var,des);
    for(int i=0;i<N;i++)
    {
        int f=0,e;
        e=vector[i];
        for(int j=0;j<N;j++)
        {
            if(e==vector[j]) f++;
        }
        if(f==1) printf("\nLa frecuencia de %i es %i",e,f);
        else
        {
            int f2=0;
            for(int j=0;j<i;j++)
            {
                if(e==vector[j]) f2++;
            }
            if(f2==0) printf("\nLa frecuencia de %i es %i",e,f);
        }
    }
}
