#include<stdio.h>
#include<stdlib.h>

void troca_valores ( int *valor1, int *valor2 );

int main(void)
{
    int primeira;
    int segunda;

    printf("\n - Digite um valor inteiro: ");
    scanf("%d",&primeira);
    printf("\n - Digite mais um valor inteiro: ");
    scanf("%d",&segunda);

    printf("\n - Valor da primeira variavel = %d",primeira);
    printf("\n - Valor da segunda variavel = %d",segunda);
    
    troca_valores ( &primeira, &segunda );

    printf("\n - Valor da primeira variavel apos a funcao = %d",primeira);
    printf("\n - Valor da segunda variavel apos a funcao = %d",segunda);

    printf("\n\n\n");
    system("pause");

    return 0;
}

void troca_valores ( int *valor1, int *valor2 )
{
    int troca;
    
    troca = *valor1;

    if ( *valor2 > *valor1 )
    {
        *valor1 = *valor2;
        *valor2 = troca;
    }
    

}