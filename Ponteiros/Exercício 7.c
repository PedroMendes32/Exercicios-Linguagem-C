#include<stdio.h>
#include<stdlib.h>

void modifica ( int *aPtr, int *bPtr );

int main(void)
{
    int a;
    int b;

    printf("\n - Digite um valor para A: ");
    scanf("%d",&a);
    printf("\n - Digite um valor para B: ");
    scanf("%d",&b);

    modifica ( &a, &b );

    printf("\n - Valor de A: %d",a);
    printf("\n - Valor de B: %d",b);

    printf("\n\n\n");
    system("pause");

    return 0;
}

void modifica ( int *aPtr, int *bPtr )
{
    int soma;

    soma = *aPtr + *bPtr;
    *aPtr = soma;
}