#include<stdio.h>
#include<stdlib.h>

int dobro ( int num );

int main(void)
{
    int numero;

    printf("\n - Digite um numero inteiro: ");
    scanf("%d",&numero);

    dobro(numero);

    printf("\n - O dobro de %d e igual a %d",numero,dobro(numero));

    printf("\n\n\n");
    system("pause");

    return 0;
}

int dobro ( int num )
{
    int resultado;

    resultado = num * 2;

    return resultado;
}