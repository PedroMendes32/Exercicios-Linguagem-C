#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    FILE *arq;

    char caracteres[10];
    char leitura;

    arq = fopen("Exercicio4.txt","w");

    if ( arq )
    {
        do
        {	
            printf("\n - Digite um caractere ou 0 para sair: ");
            fgets(caracteres,10,stdin);
            fputs(caracteres,arq);
        }
        
        while ( caracteres[0] != '0' );
    }
    else
    {
        printf("\n - Arquivo nao pode ser criado!");
    }

    fclose(arq);

    arq = fopen("Exercicio4.txt", "r");
	
    if ( arq )
    {	
    	printf("\n - Caracteres lidos: \n");
    	
        while ((leitura = getc(arq)) != EOF)
        {   
            if ( leitura == '0')
            {
                break;
            }
            else
            {
                printf(" - %c",leitura);
            }
        }
    }
    else
    {
        printf("\n - Arquivo nao pode ser lido!");
    }
    
    fclose(arq);

    printf("\n\n\n");
    system("pause");

    return 0;
}