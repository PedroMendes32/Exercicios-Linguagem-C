#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int main(void)
{
    float array[SIZE] = {0};
    int i;

    for ( i = 0; i < SIZE; i++ )
    {
        printf("\n - %p = Array[%d] ",&array[i],i);
    }

    printf("\n\n\n");
    system("pause");

    return 0;
}
