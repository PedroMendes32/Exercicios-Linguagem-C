#include<stdio.h>
#include<stdlib.h>

int verdade ( int numero );

int main(void)
{
    int valor;

    printf("\n   1 = Positivo ");
    printf("\n  -1 = Negativo ");
    printf("\n   0 = Valor igual a zero ");

    printf("\n\n - Digite um numero inteiro: ");
    scanf("%d",&valor);

    printf("\n %d --- %d ",valor,verdade(valor));

    printf("n\n\n");
    system("pause");

    return 0;
}

int verdade ( int numero )
{	
	
	int valor_verdade = 0;
	
	
    if ( numero > 0 )
    {
        valor_verdade = 1;
        
        return valor_verdade;
    }

    else if ( numero < 0 )
    {
        valor_verdade = -1;
        
        return valor_verdade;
    }

    else
    {
        return valor_verdade;
    }
}