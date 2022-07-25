#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int quadrado_perfeito ( int a );

int main(void)
{
    int numero;

    printf("\n - Digite um numero inteiro positivo: ");
    scanf("%d",&numero);

    if ( numero > 0 )
    {
        quadrado_perfeito( numero );
    }

    else
    {
        printf("\n - Valor digitado invalido! ");
    }

    printf("\n\n\n");
    system("pause");

    return 0;
}

int quadrado_perfeito ( int a )
{
   int raiz_numero;

   raiz_numero = sqrt(a);

   if ( a % raiz_numero == 0 )
   {
       return printf("\n - %d e um quadrado perfeito pois pode ser escrito como %d x %d = %d ",a,raiz_numero,raiz_numero,a);
   }
   else
   {
       return printf("\n - %d nao e um quadrado perfeito !",a);
   }
}