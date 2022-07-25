#include<stdio.h>
#include<stdlib.h>

void triangulo ( float lado_a, float lado_b, float lado_c );

int main(void)
{
    float lado1;
    float lado2;
    float lado3;

    printf("\n - Digite o valor do primeiro lado do triangulo: ");
    scanf("%f",&lado1);
    printf("\n - Digite o valor do segundo lado do triangulo: ");
    scanf("%f",&lado2);
    printf("\n - Digite o valor do terceiro lado do triangulo: ");
    scanf("%f",&lado3);

    triangulo ( lado1, lado2, lado3 );

    printf("\n\n\n");
    system("pause");

    return 0;
}

void triangulo ( float lado_a, float lado_b, float lado_c )
{
    if ( lado_a > lado_b + lado_c )
    {
        printf("\n - Nao e possivel formar um triangulo! ");
    }
    else if ( lado_b > lado_a + lado_c )
    {
        printf("\n - Nao e possivel formar um triangulo! ");
    }
    else if ( lado_c > lado_a + lado_b )
    {
        printf("\n - Nao e possivel formar um triangulo! ");
    }
    else
    {
        printf("\n - E possivel formar um triangulo pois o tamanho de um dos lados e menor que a soma dos outros dois! ");

        if (( lado_a == lado_b )&&( lado_a == lado_c ))
        {
            printf("\n - Triangulo Equilatero!, pois todos os lados sao iguais");
        }
        else if (( lado_a != lado_b)&&( lado_a != lado_c )&&( lado_b != lado_c ))
        {
            printf("\n - Triangulo Escaleno!, pois todos os lados sao diferente");
        }
        else
        {
            printf("\n - Triangulo Isosceles!, pois possue apenas dois lados iguai");
        }
    }
}