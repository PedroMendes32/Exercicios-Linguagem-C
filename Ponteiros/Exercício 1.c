#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int x = 10;
    char letra = 'C';
    float y = 7.66;

    int *xPtr = &x;
    char *lPtr = &letra;
    float *yPtr = &y;

    printf("\n - x = %d",x);
    printf("\n - letra = %c",letra);
    printf("\n - y = %.2f",y);

    *xPtr = 10 * 2;
    *lPtr = 'D';
    *yPtr = 7.66 * 2;

    printf("\n\n - Modificacao com ponteiros: ");

    printf("\n - x = %d",x);
    printf("\n - letra = %c",letra);
    printf("\n - y = %.2f",y);

    printf("\n\n\n");
    system("pause");

    return 0;
}