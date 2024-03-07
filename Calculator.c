#include <stdio.h>
#include <stdlib.h>
int main()
{
    float A, B;
    char Op;
    printf("The first Number : ");
    scanf("%f", &A);

    printf("The second Number : ");
    scanf("%f", &B);

    printf("The operation between these Numbers : ");
    scanf(" %c", &Op);

    if (Op == '+')
    {
        printf("%.2f", A+B);
    }
    else if (Op == '-')
    {
        printf("%.2f", A-B);
    }
    else if (Op == '*')
    {
        printf("%.2f", A*B);
    }
    else if (Op == '/')
    {
        while (B == 0)
        {
            printf("Try Entering a non-zero number! : ");
            scanf("%f", &B);
        } 
    printf("%.2f", A/B);
    }
    return 0;
}