#include<stdio.h> 
#include<stdlib.h> 

int main(void)
{
	FILE *arq;
	
	char caracteres;
	
	arq = fopen("nomes.txt", "r");
	
	if ( arq )
	{
		while ((caracteres = getc(arq)) != EOF)
		{
			printf("%c", caracteres);
		}
	}
	else
	{
		printf("\n - Arquivo nao existe! ");
	}
	
	fclose(arq);

	printf("\n\n\n");
	system("pause");
	
	return 0;
}