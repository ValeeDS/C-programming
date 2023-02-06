#include <stdio.h>

void main()
{
    int a,b,c,d,m;
    printf("Ingrese 4 números:\n");
    scanf("%i %i %i %i",&a,&b,&c,&d);
    if(a>b)
    {
        if(b>c)
        {
            if(c>d)
            {
                m=d;
            }
            else
            {
                m=c;
            }
        }
        else
        {
            if(b>d)
            {
                m=d;
            }
            else
            {
                m=b;
            }
        }
    }
    else
    {
        if(a>c)
        {
            if(c>d)
            {
                m=d;
            }
            else
            {
                m=c;
            }
        }
        else
        {
            if(a>d)
            {
                m=d;
            }
            else
            {
                m=a;
            }
        }
    }
    printf("El menor número es: %i",m);
}
