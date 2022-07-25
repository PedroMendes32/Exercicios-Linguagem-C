#include<stdio.h>
#include<stdlib.h>
#define LINHA 3
#define COLUNA 3

int main(void)
{
    float matriz[LINHA][COLUNA];
    int i;
    int j;

    for ( i = 0; i < LINHA; i++ )
    {
        for ( j = 0; j < COLUNA; j++ )
        {
        	matriz[i][j] = 0;
            printf("\n - Matriz[%d][%d] = %p",i,j,&matriz[i][j]);
        }
    }

    printf("\n\n\n");
    system("pause");

    return 0;
}