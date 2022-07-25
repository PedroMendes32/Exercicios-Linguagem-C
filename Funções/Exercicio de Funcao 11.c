#include<stdio.h>
#include<stdlib.h>

float calculo ( float nota_1, float nota_2, float nota_3, char escolha );

int main(void)
{
    float n1;
    float n2;
    float n3;
    char media;


    printf("\n - Digite a nota da prova 1: ");
    scanf("%f",&n1);
    printf("\n - Digite a nota da prova 2: ");
    scanf("%f",&n2);
    printf("\n - Digite a nota da prova 3: ");
    scanf("%f",&n3);

    printf("\n - P ( Media Ponderada ) ");
    printf("\n - A ( Media Aritmetica ) ");

    fflush(stdin);

    printf("\n - Digite a sua escolha: ");
    scanf("%c",&media);

    if ( media == 'P')
    {
        printf("\n - A Media Ponderada e igual a %.2f",calculo(n1,n2,n3,media));
    }
    else if ( media == 'A')
    {
        printf("\n - A Media Aritmetica e igual a %.2f",calculo(n1,n2,n3,media));
    }
    else
    {
        printf("\n - Caractere invalido! ");
    }

    printf("\n\n\n");
    system("pause");

    return 0;
}

float calculo ( float nota_1, float nota_2, float nota_3, char escolha )
{
    if ( escolha == 'A')
    {
        float media_aritmetica;
        float soma_notas;

        soma_notas = nota_1 + nota_2 + nota_3;

        media_aritmetica = soma_notas / 3;

        return media_aritmetica;
    }
    else
    {
        float media_ponderada;
        float peso_1 = 5;
        float peso_2 = 3;
        float peso_3 = 2;
        float soma_pesos;
        float notas_x_pesos;

        notas_x_pesos = (nota_1 * peso_1) + (nota_2 * peso_2) + (nota_3 * peso_3 );
        soma_pesos = peso_1 + peso_2 + peso_3;

        media_ponderada = notas_x_pesos/soma_pesos;

        return media_ponderada;
    }
}