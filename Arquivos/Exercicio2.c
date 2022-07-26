#include<stdio.h> 
#include<stdlib.h> 

int main(void)
{
	int soma = 0;
	int numeros;
	int resultado;
	
	FILE *arq;
	
	arq = fopen("Exercicio2.txt","r");
	
	if (arq)
	{
		while ( !feof(arq) )
		{
			resultado = fscanf( arq, "%d", &numeros);
			
			if ( resultado == 1 )
			{	
				printf("\n - %d",numeros);
				soma = soma + numeros;
			}
		}
	}
	else
	{
		printf("\n - Arquivo nao encontrado!");
	}
	
	fclose(arq);
	printf("\n\n - A soma dos numeros lidos no arquivo e igual a %d",soma);
	
	printf("\n\n\n");
	system("pause");
	
	return 0;
}