#include<stdio.h>
#include<stdlib.h>

void xLocal(void);
void xStatic(void);
void xGlobal(void);

int x = 25;

int main(void)
{
    int x = 2;

    printf("\n - %d X = Local em Main! ",x);

    {
        int x = 5;
        printf("\n - %d X = Em novo escopo em Main! ",x);
    }

    xLocal();
    xStatic();
    xGlobal();

    printf("\n - %d = x Local em Main! ",x);

    printf("\n\n\n");
    system("pause");

    return 0;
}

void xLocal(void)
{
    int x = 33;
    
    printf("\n - X = Local na funcao = %d",x);
    x++;
    printf("\n - X = Local na funcao incrementado = %d",x);
}

void xStatic(void)
{
    static int x = 100;

    printf("\n - Static X na funcao = %d ",x);
    x++;
    printf("\n - Static X incrementado na funcao =  %d",x);
}

void xGlobal(void)
{
    printf("\n - X Global = %d ",x);
}