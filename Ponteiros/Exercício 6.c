#include<stdio.h>
#include<stdlib.h>

int dobro ( int *aPtr, int *bPtr );

int main(void)
{
    int a;
    int b;
    
    printf("\n - Digite um valor para A: ");
    scanf("%d",&a);
    printf("\n - Digite um valor para B: ");
    scanf("%d",&b);

    printf("\n - Valor de A: %d",a);
    printf("\n - Valor de B: %d",b);
    
    printf("\n - A soma do dobro de A e B: %d",dobro( &a, &b));

    printf("\n - Novo valor de A: %d",a);
    printf("\n - Novo valor de B: %d",b);

    printf("\n\n");
    system("pause");

    return 0;
}

int dobro ( int *aPtr, int *bPtr )
{
    *aPtr = *aPtr * 2;
    *bPtr = *bPtr * 2;

    int soma;

    soma = *aPtr + *bPtr;

    return soma;
}