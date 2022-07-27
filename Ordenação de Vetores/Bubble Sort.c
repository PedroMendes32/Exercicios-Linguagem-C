#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 200

int main(void)
{
    int vetor[SIZE];
    int i;
    int passo;
    int troca;

    srand( time( NULL ) );

    for ( i = 0; i < SIZE; i++ )
    {
        vetor[i] = 3 + (rand() % 300);
    }

    /*Ordenando com bubble Sort */

    for ( passo = 1; passo < SIZE; passo++ )
    {
        for ( i = 0; i < SIZE - 1; i++ )
        {
            if ( vetor[i] > vetor[i + 1] )
            {
                troca = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = troca;
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