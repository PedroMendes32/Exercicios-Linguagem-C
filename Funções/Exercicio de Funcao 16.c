#include<stdio.h>
#include<stdlib.h>

void desenhaLinha ( int quantidade );

int main(void)
{
    int quantidade;

    printf("\n - Digite a quantidade de sinais de '=' que serao mostrados pela funcao: ");
    scanf("%d",&quantidade);

    desenhaLinha( quantidade );

    printf("\n\n\n");
    system("pause");

    return 0;
}

void desenhaLinha ( int quantidade )
{
    int i;
	
    for ( i = 0; i < quantidade; i++ )
    {
        printf("=");
    }
}