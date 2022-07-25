#include<stdio.h>
#include<stdlib.h>

void operacao ( int numero_1, int numero_2, char decisao );

int main(void)
{
    int numero_1;
    int numero_2;
    char decisao;

    printf("\n + = Soma ");
    printf("\n - = Subtracao ");
    printf("\n / = Divisao ");
    printf("\n * = Multiplicacao ");

    printf("\n - Digite a operacao que voce deseja: ");
    scanf("%c",&decisao);
    printf("\n - Digite o primeiro numero: ");
    scanf("%d",&numero_1);
    printf("\n - Digite o segundo numero: ");
    scanf("%d",&numero_2);

    operacao(numero_1,numero_2,decisao);

    printf("\n\n\n");
    system("pause");

    return 0;
}

void operacao ( int numero_1, int numero_2, char decisao )
{
     int soma; 
     int sub;
     int div;
     int mult;
     
    switch ( decisao )
    {
        case '+':  
                    soma = numero_1 + numero_2;
                    printf("\n - %d + %d = %d ",numero_1,numero_2,soma);
        break;

        case '-':
                    sub = numero_1 - numero_2;
                    printf("\n - %d - %d = %d ",numero_1,numero_2,sub);
        break;

        case '*': 
                    mult = numero_1 * numero_2;
                    printf("\n - %d * %d = %d ",numero_1,numero_2,mult);
        break;

        case '/':
                    div = numero_1 / numero_2;
                    printf("\n - %d / %d = %d",numero_1,numero_2,div);
        break;

        default: printf("\n - Operacao digitada invalida");
    }

}