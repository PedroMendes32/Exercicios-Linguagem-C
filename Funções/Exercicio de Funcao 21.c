#include<stdio.h>
#include<stdlib.h>

int primos ( int n );

int main(void)
{
    int numero;

    printf("\n - Digite um numero inteiro: ");
    scanf("%d",&numero);

    primos(numero);

    printf("\n\n\n");
    system("pause");

    return 0;
}

int primos ( int n )
{
    int numeros[n];
    int controle = 1;
    int i;
    int j;
    int quantidade_primos = 0;
    int divisores = 0;

    for ( i = 0; i < n; i++ )
    {
        numeros[i] = controle;
        controle++;
    }

    for ( j = 0; j < n; j++ )
    {
    	
    	divisores = 0;
    	
        for ( i = 1; i <= n; i++ )
        {
            if ( numeros[j] % i == 0 )
            {
                divisores++;
            }
            
        }
		
		if (divisores == 2)
		{
			quantidade_primos++;
		}
        
    }

    return printf("\n - A quantidade de primos abaixo de %d e igual a %d",n,quantidade_primos);
}