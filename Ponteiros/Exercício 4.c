#include<stdio.h>
#include<stdlib.h>

void troca_valores ( int *a, int *b );

int main(void)
{
    int a;
    int b;

    printf("\n - Digite um valor para a: ");
    scanf("%d",&a);
    printf("\n - Digite um valor para b: ");
    scanf("%d",&b);

    printf("\n\n - Valores de A e B antes da funcao: ");
    printf("\n - A = %d",a);
    printf("\n - B = %d",b);

    troca_valores ( &a, &b );

    printf("\n\n - Valores de A e B depois da funcao: ");
    printf("\n - A = %d",a);
    printf("\n - B = %d",b);

    printf("\n\n\n");
    system("pause");

    return 0;
}

void troca_valores ( int *a, int *b )
{	
	int troca;
	
    troca = *a;
    *a = *b;
    *b = troca;
}