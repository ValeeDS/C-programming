#include <stdio.h>

void main()
{
    int N;
    float Wallis, pi, aprox;
    printf("Realizar una aproximación para n=");
    scanf("%i",&N);
    aprox=1;
    for(int i=1;i<=N;i++)
    {
        float n,d;
        printf("\ni=%i de %i",i,N);
        n=(2.0*i)*(2.0*i);
        d=(2.0*i-1.0)*(2.0*i+1.0);
        Wallis=n/d;
        aprox=aprox*Wallis;
    }
    pi=2*aprox;
    printf("\n\nPi es aproximadamente %f",pi);
}
