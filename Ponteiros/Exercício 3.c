#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a;
    int b;
    int *aPtr = &a;
    int *bPtr = &b;

    printf("\n - Digite um valor para a: ");
    scanf("%d",&a);
    printf("\n - Digite um valor para b: ");
    scanf("%d",&b);

    if ( aPtr > bPtr )
    {
        printf("\n - %d ( %p > %p )",a,aPtr,bPtr);
    }
    else
    {
        printf("\n - %d ( %p > %p )",b,bPtr,aPtr);
    }
   
    printf("\n\n\n");
    system("pause");

    return 0;
}

