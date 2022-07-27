#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 200

void bubble_sort ( int vetor[], const int size );

int main(void)
{
    int vetor[SIZE];
    int chave;
    int i;

    for ( i = 0; i < SIZE; i++ )
    {
        vetor[i] = 1 + (rand() % 400);
    }

    bubble_sort ( vetor, SIZE );

    printf("\n - Digite o numero para ser encontrado no Vetor: ");
    scanf("%d",&chave);

    for ( i = 0; i < SIZE; i++ )
    {
        if ( vetor[i] == chave )
        {
            printf("\n - %d esta na posicao %d do Vetor",chave,i);
        }
    }
    printf("\n\n");
    
    for ( i = 0; i < SIZE; i++ )
    {
        printf("\n - Vetor[%d] = %d",i,vetor[i]);
    }

    printf("\n\n\n");
    system("pause");

    return 0;
}

void bubble_sort ( int vetor[], const int size )
{
    void swap( int *numero1, int *numero2 );

    int passo;
    int i;

    for ( passo = 1; passo - SIZE; passo++ )
    {
        for ( i = 0; i < SIZE - 1; i++ )
        {
            if ( vetor[i] > vetor[i + 1] )
            {
                swap( &vetor[i], &vetor[i + 1]);
            }
        }
    }
}

void swap( int *numero1, int *numero2 )
{
    int troca;

    troca = *numero1;
    *numero1 = *numero2;
    *numero2 = troca;
}