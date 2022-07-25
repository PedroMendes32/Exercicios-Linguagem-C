#include<stdio.h>
#include<stdlib.h>

void linhas ( int n );

int main(void)
{
    int numero;

    printf("\n - Digite um Numero: ");
	scanf("%d",&numero);
	
    linhas(numero);

    printf("\n\n\n");
    system("pause");

    return 0;
}

void linhas ( int n )
{
    int i;
    int j;
    int matriz[(2*n)-1][n];
    int linhas;
    
    for ( i = 0; i < (2*n) -1; i++ )
    {
        for ( j = 0; j < n; j++ )
        {
            matriz[i][j] = 42;
        }
    }

    linhas = (2*n)-1;

    printf("\n - Linhas: ");

    for ( i = 0; i < n; i++ )
    {
        printf("\n");
        for ( j = 0; j < n; j++ )
        {   
            if ( i >= j )
            {
                printf(" %c ",matriz[i][j]);
            }
        }
    }


    for ( i = n - 1; i >= 0; i--)
    {   
        printf("\n");
        for ( j = n - 1; j >= 0; j-- )
        {	
        	if ( i > j )
			{
				printf(" %c ",matriz[i][j]);
			}
        }
    }
}