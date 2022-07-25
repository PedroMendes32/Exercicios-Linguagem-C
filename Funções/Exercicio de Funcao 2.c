#include<stdio.h>
#include<stdlib.h>

int data ( int ano, int mes, int dia );

int main(void)
{
    int dia_atual;
    int mes_atual;
    int ano_atual;


    printf("\n - Digite o dia atual: ");
    scanf("%d",&dia_atual);
    printf("\n - Digite o mes atual: ");
    scanf("%d",&mes_atual);
    printf("\n - Digite o ano atual: ");
    scanf("%d",&ano_atual);

	
	printf("\n\n");
	
    data(ano_atual,mes_atual,dia_atual);


    printf("\n\n\n");
    system("pause");

    return 0;
}

int data ( int ano, int mes, int dia )
{
    switch ( mes )
    {
        case 1:
                return printf("\n - %d de Janeiro de %d",dia,ano);
        break;

        case 2:
                return printf("\n - %d de Fevereiro de %d",dia,ano);
        break;

        case 3: 
                return printf("\n - %d de Marco de %d",dia,ano);
        break;

        case 4: 
                return printf("\n - %d de Abril de %d",dia,ano);
        break;

        case 5: 
                return printf("\n - %d de Maio de %d",dia,ano);
        break;

        case 6: 
                return printf("\n - %d de Junho de %d",dia,ano);
        break;

        case 7:
                return printf("\n - %d de Julho de %d",dia,ano);
        break;

        case 8:
                return printf("\n - %d de Agosto de %d",dia,ano);
        break;

        case 9:
                return printf("\n - %d de Setembro de %d",dia,ano);
        break;

        case 10:
                return printf("\n - %d de Outubro de %d",dia,ano);
        break;

        case 11:
                return printf("\n - %d de Novembro de %d",dia,ano);
        break;

        case 12:
                return printf("\n - %d de Dezembro de %d",dia,ano);
        break;

        default:
                return printf("\n - Mes digitado invalido! ");

    }
}