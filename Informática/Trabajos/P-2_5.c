#include <stdio.h>
void main()
{
    int n1,n2,n3,n4,M;
    printf("Ingrese n1:\n");
    scanf("%i",&n1);
    printf("Ingrese n2:\n");
    scanf("%i",&n2);
    printf("Ingrese n3:\n");
    scanf("%i",&n3);
    printf("Ingrese n4:\n");
    scanf("%i",&n4);
    if(n1<n2)
    {
        if(n2<n3)
        {
            if(n3<n4)
            {
                M=n4;
            }
            else
            {
                M=n3;
            }
        }
        else
        {
            if(n2<n4)
            {
                M=n4;
            }
            else
            {
                M=n2;
            }
        }
    }
    else
    {
        if(n1<n3)
        {
            if(n3<n4)
            {
                M=n4;
            }
            else
            {
                M=n3;
            }
        }
        else
        {
            if(n1<n4)
            {
                M=n4;
            }
            else
            {
                M=n1;
            }
        }
    }
    printf("Máximo: %i",M);

}
