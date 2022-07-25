#include<stdio.h>
#include<stdlib.h>

int tempo ( int hrs, int min, int seg );

int main(void)
{
    int segs;
    int mins;
    int horas;

    printf("\n - Digite a quantidade de horas: ");
    scanf("%d",&horas);
    printf("\n - Digite a quantidade de minutos: ");
    scanf("%d",&mins);
    printf("\n - Digite a quantidade de segundos: ");
    scanf("%d",&segs);

    printf("\n - %dH + %dMIN + %dSEG = %d Segundos! ",horas,mins,segs,tempo(horas,mins,segs));

    printf("\n\n\n");
    system("pause");

    return 0;
}

int tempo ( int hrs, int min, int seg )
{
    int min_em_segundos;
    int hrs_em_segundos;
    int segundos_totais;

    min_em_segundos = min * 60;
    hrs_em_segundos = hrs * 3600;
    segundos_totais = min_em_segundos + hrs_em_segundos + seg;

    return segundos_totais;
}   
