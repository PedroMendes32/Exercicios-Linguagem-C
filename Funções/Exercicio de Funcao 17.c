#include<stdio.h>
#include<stdlib.h>

int numeros ( int numero_1, int numero_2 );

int main(void)
{
    int numero1;
    int numero2;
	int i;
	
	
    printf("\n - Digite o primeiro numero: ");
    scanf("%d",&numero1);
    printf("\n - Digite o segundo numero: ");
    scanf("%d",&numero2);
	printf("\n");
	
	for ( i = numero1; i < numero2; i++ )
	{
		printf("\n - %d",i);
	}
	
	printf("\n");
    printf("\n A soma dos numeros entre %d e %d e igual a %d",numero1,numero2,numeros(numero1,numero2));
	
    printf("\n\n\n");
    system("pause");

    return 0;
}

int numeros ( int numero_1, int numero_2 )
{
    int i;
    int soma_numeros = 0;

    for ( i = numero_1; i < numero_2; i++ )
    {
        soma_numeros = soma_numeros + i;
    }

   return soma_numeros;
	
}