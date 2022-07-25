#include<stdio.h>
#include<stdlib.h>
#include<math.h>


float triangulo ( float cateto_a, float cateto_b );

int main(void)
{
    float cat_a;
    float cat_b;

    printf("\n - Digite o valor do Cateto A: ");
    scanf("%f",&cat_a);
    printf("\n - Digite o valor do Cateto B: ");
    scanf("%f",&cat_b);

    printf("\n - A Hipotenusa e igual a %.2f",triangulo(cat_a,cat_b));

    printf("\n\n\n");
    system("pause");

    return 0;
}

float triangulo ( float cateto_a, float cateto_b )
{
    float hipotenusa;
    float cateto_a_quadrado;
    float cateto_b_quadrado;
    float soma_catetos;

    cateto_a_quadrado = cateto_a * cateto_a;
    cateto_b_quadrado = cateto_b * cateto_b;
    soma_catetos = cateto_a_quadrado + cateto_b_quadrado;
    hipotenusa = sqrt(soma_catetos);

    return hipotenusa;
}