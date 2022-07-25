#include<stdio.h>
#include<stdlib.h>

void mensagem ( float km, float litros );

int main(void)
{
    float litros;
    float distancia;

    printf("\n - Digite a distancia em KM/H que o carro ira percorrer: ");
    scanf("%f",&distancia);
    printf("\n - Digite a quantidade de litros que o carro consome durante esse percurso: ");
    scanf("%f",&litros);

    mensagem(distancia,litros);

    printf("\n\n");
    system("pause");

    return 0;
}

void mensagem( float km, float litros )
{
    float km_litro;

    km_litro = km / litros;

    if ( km_litro < 8 )
    {
        printf("\n - Venda o carro! ");
    }
    else if (( km_litro >= 8)&&( km_litro < 12 ))
    {
        printf("\n - Economico!");
    }
    else
    {
        printf("\n - Super economico! ");
    }
  
}