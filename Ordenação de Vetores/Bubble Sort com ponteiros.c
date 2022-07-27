#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 200

void swap ( int *numero1, int *numero2 );

int main(void)
{
    int vetor[SIZE];
    int i;
    int passo;

    srand( time( NULL ) );

    for ( i = 0; i < SIZE; i++ )
    {
        vetor[i] = 3 + (rand() % 300);
    }

    /*Ordenando com bubble Sort com ponteiros */

    for ( passo = 1; passo < SIZE; passo++ )
    {
        for ( i = 0; i < SIZE - 1; i++ )
        {
            if ( vetor[i] > vetor[i + 1] )
            {
                swap( &vetor[i], &vetor[i + 1]);
            }
        }
    }

    printf("\n - Vetor Ordenado: ");

    for ( i = 0; i < SIZE; i++ )
    {
        printf("\n - %d",vetor[i]);
    }

    printf("\n\n\n");
    system("pause");

    return 0;
}

void swap ( int *numero1, int *numero2 )
{
	int troca;
	
	troca = *numero1;
	*numero1 = *numero2;
	*numero2 = troca;
}