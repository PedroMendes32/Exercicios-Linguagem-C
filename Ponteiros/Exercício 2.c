#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int x = 2;
    int y = 3;

    int *xPtr = &x;
    int *yPtr = &y;

    if ( xPtr > yPtr )
    {
        printf("\n - Maior endereco = %p",xPtr);
    }
    else
    {
        printf("\n - Maior endereco = %p",yPtr);
    }

    printf("\n - X = %p",&x);
    printf("\n - xPtr = %p",xPtr);
    printf("\n - Y = %p",&y);
    printf("\n - yPtr = %p",yPtr);

    printf("\n\n\n");
    system("pause");
    
    return 0;
}