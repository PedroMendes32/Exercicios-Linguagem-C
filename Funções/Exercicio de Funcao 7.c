#include<stdio.h>
#include<stdlib.h>

float temperatura ( float cels );

int main(void)
{
    float celsius;

    printf("\n - Digite a temperatura em CELSIUS: ");
    scanf("%f",&celsius);

    printf("\n - %.2f Celsius == %.2f Fahrenheit ",celsius,temperatura(celsius));

    printf("\n\n\n");
    system("pause");

    return 0;
}

float temperatura ( float cels )
{
    float temp_final;

    temp_final = (cels * (9.0/5.0)) + 32.0;

    return temp_final;
}