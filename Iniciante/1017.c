#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempo, velocidade ;
    float distancia, gasto;
    scanf ("%d" "%d",&tempo,&velocidade);
    distancia = (velocidade * tempo);
    gasto = (distancia /12);
    printf("%.3f\n",gasto);
    return 0;
}