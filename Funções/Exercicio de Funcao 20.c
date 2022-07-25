#include<stdio.h>
#include<stdlib.h>

int fatorial ( int numero );

int main(void)
{
    int numero;

    printf("\n - Digite um numero inteiro: ");
    scanf("%d",&numero);

    fatorial ( numero );

    printf("\n\n\n");
    system("pause");

    return 0;
}

int fatorial ( int numero )
{
    int i;
    int fatorial;
    
    fatorial = numero;
    i = numero - 1;
    
    while ( i != 0 )
	{
		fatorial = fatorial * i;
		i--;
	}
	
	return printf("\n - O fatorial de %d e igual a %d",numero,fatorial);
}