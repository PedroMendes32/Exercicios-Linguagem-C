#include<stdio.h>
#include<stdlib.h>

float volume ( float raio );

int main(void)
{
    float raio_esfera;


    printf("\n - Digite o tamanho do Raio da Esfera: ");
    scanf("%f",&raio_esfera);

    printf("\n - O volume da Esfera e igual a %.2f",volume(raio_esfera));

    printf("\n\n\n");
    system("pause");

    return 0;
}

float volume ( float raio )
{
    float const PI = 3.14;
    float volume_esfera;

    volume_esfera = ((4*PI)*(raio*raio*raio))/3;

    return volume_esfera;

}