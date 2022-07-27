#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 300


int busca_binaria ( int vetor[], int chave, int low, int high );

int main(void)
{
    int i;
    int resultado;
    int passo;
    int troca;
    int vetor_main[SIZE];
    int busca;

    printf("\n - Vetor Gerado: ");
    printf("\n %4s %4s","Valor","Index");
    
    /*Preenchendo o vetor*/

    for ( i = 0; i < SIZE; i++ )
    {
        vetor_main[i] = 1 + (rand() % 1000);

        printf("\n %4d %4d",vetor_main[i],i);
    }

    printf("\n\n - Vetor Ordenado: ");
 
    /* Ordenando o Vetor */

    for ( passo = 1; passo < SIZE; passo++ )
    {
        for ( i = 0; i < SIZE - 1; i++ )
        {
            if ( vetor_main[i] > vetor_main[i + 1] )
            {
                troca = vetor_main[i];
                vetor_main[i] = vetor_main[i + 1];
                vetor_main[i + 1] = troca;
            }
        }
    }

    printf("\n %4s %4s","Valor","Index");

    for ( i = 0; i < SIZE; i++ )
    {
        printf("\n %4d %4d",vetor_main[i],i);
    }

    printf("\n\n - Digite o valor para ser encontrado no Vetor: ");
    scanf("%d",&busca);

    resultado = busca_binaria ( vetor_main, busca, 0, SIZE );

    /* Verificando se a chave existe */

    if ( resultado != -1 )
    {
        printf("\n\n - %d foi encontrado no Vetor[%d]! ",busca,resultado);
    }

    else
    {
        printf("\n\n - %d nao foi encontrado no Vetor! ",busca);
    }
    
    printf("\n\n\n");
    system("pause");

    return 0;
}

int busca_binaria ( int vetor[], int chave, int low, int high )
{
    int meio;

    /* Verificando a existência da chave na parte inferior - superior do Vetor */
    
    while ( low <= high )
    {
        meio = (low + high) / 2;

        if ( chave == vetor[meio] )
        {
            return meio;
        }
        else if ( chave < vetor[meio] )
        {
            high = meio - 1;
        }
        else
        {
            low = meio + 1;
        }
        
        return -1;
    }
}