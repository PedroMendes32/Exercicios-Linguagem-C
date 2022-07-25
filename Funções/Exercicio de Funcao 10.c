#include<stdio.h>
#include<stdlib.h>

float comparacao ( float numero_1, float numero_2 );

int main(void)
{
    float num1;
    float num2;

    printf("\n - Digite o primeiro numero: ");
    scanf("%f",&num1);
    printf("\n - Digite o segundo numero: ");
    scanf("%f",&num2);
    
    if ( num1 == num2 )
    {
        printf("\n - Os numeros sao iguais! ");
    }
    else
    {
        printf("\n - O maior numero digitado foi %.2f",comparacao(num1,num2));
    }

    printf("\n\n\n");
    system("pause");

    return 0;
}

float comparacao ( float numero_1, float numero_2 )
{
    if ( numero_1 > numero_2 )
    {
        return numero_1;
    }

    else
    {
        return numero_2;
    }
}
