#include<stdio.h>
#include<stdlib.h>

void somatorio ( int n );

int main(void)
{
    int numero;

    printf("\n - Digite um numero: ");
    scanf("%d",&numero);

    somatorio ( numero );

    printf("\n\n\n");
    system("pause");


    return 0;
}

void somatorio ( int n )
{
    int i;
    int soma_numeros = 0;

    for ( i = 1; i <= n; i++ )
    {
        soma_numeros = soma_numeros + i;
    }

    printf("\n - O somatorio de %d ate %d e igual a %d",1,n,soma_numeros);
}