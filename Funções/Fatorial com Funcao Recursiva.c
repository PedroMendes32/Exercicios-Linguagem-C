
#include<stdio.h>
#include<stdlib.h>

long fatorial ( long n );

int main(void)
{
    int i;
    int limite;

    printf("\n - Digite um numero inteiro positivo: ");
    scanf("%d",&limite);
    
    if ( limite < 0 )
	{
		printf("\n - Valor invalido! ");
	}
	
	else
	{
		for ( i = 0; i <= limite; i++ )
		{
			printf("\n %d! = %ld ",i,fatorial(i));
		}
	}
	
	printf("\n\n\n");
	system("pause");
	
	return 0;
    
}

long fatorial ( long n )
{
    if ( n == 0 )
    {
        return 1;
    }
    if ( n == 1 )
    {
        return 1;
    }
    else
    {
        return ( n * fatorial(n - 1) );
    }
}