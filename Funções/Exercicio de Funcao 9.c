#include<stdio.h>
#include<stdlib.h>

float cilindro ( float raio, float altura );

int main(void)
{
    float alt;
    float raio_c;

    printf("\n - Digite a altura do Cilindro: ");
    scanf("%f",&alt);
    printf("\n - Digite o raio do Cilindro: ");
    scanf("%f",&raio_c);

    printf("\n\n - O volume do Cilindro e igual a %.2f Litros",cilindro(raio_c,alt));

    printf("\n\n\n");
    system("pause");

    return 0;
}

float cilindro ( float raio, float altura )
{
    float const PI = 3.141592;
    float raio_quadrado;
    float volume_cilindro;

    raio_quadrado = raio * raio;

    volume_cilindro =  (PI * raio_quadrado)*altura;

    return volume_cilindro;
}