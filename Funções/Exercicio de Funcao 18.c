#include<stdio.h>
#include<stdlib.h>

int expo ( int x, int z );

int main(void)
{
    int base, expoente;

    printf("\n - Digite um numero para base: ");
    scanf("%d",&base);
    printf("\n - Digite um numero para expoente: ");
    scanf("%d",&expoente);
    printf("\n - %d^%d = %d",base,expoente,expo(base,expoente));

    printf("\n\n\n");
    system("pause");

    return 0;

}

int expo ( int x, int z )
{
    int i;
    int resultado = 1;

    if ( x == 0 )
    {
        resultado = 1;

    }

    else if ( x == 1 )
    {
        resultado = x;
    }

    else 
    {
        for ( i = 1; i <= z; i++ )
        {
            resultado = resultado * x;
        }
    
    }
    
    return resultado;
}