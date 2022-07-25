#include<stdio.h>
#include<stdlib.h>

void serie ( float n );

int main(void)
{
    float numero;
    
    printf("\n - Digite um numero para N: ");
    scanf("%f",&numero);

    serie ( numero );

    printf("\n\n\n");
    system("pause");

    return 0;
}

void serie ( float n )
{
    float potencia_n = n * n;
    float denominador = n + 3;
    float serie;

    serie = ((2/4) + (5/5) + (10/6) + (potencia_n + 1)) / denominador;

    printf("\n - A serie e igual a %.2f",serie);

}