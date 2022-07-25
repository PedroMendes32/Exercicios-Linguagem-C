#include<stdio.h>
#include<stdlib.h>

void linhas ( int n );

int main(void)
{
    int numero;

    printf("\n - Digite a quantidade de linhas: ");
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
    int matriz[n][n];
    
    for ( i = 0; i < n; i++ )
	{
		for ( j = 0; j < n; j++ )
		{
			matriz[i][j] = 33;
		}
	}
	
	printf("\n - LINHAS: ");
	
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
    
}