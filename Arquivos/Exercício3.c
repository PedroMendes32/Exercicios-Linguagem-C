#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char nomes[20];

    FILE *arq;

    arq = fopen("nomes.txt","w");

    if ( arq )
    {
        do 
        {
            printf("\n - Digite um nome ou 0 para sair: ");
            fgets(nomes,20,stdin);
            fputs(nomes,arq);
        }
        while ( nomes[0] != '0');
    }

    else
    {
        printf("\n - Nao foi possivel criar o arquivo!");
    }
    
    fclose(arq);

    printf("\n\n\n");
    system("pause");

    return 0;
}