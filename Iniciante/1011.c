#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int raio;
    double pi,volume;

    scanf ("%d",&raio);
    pi = 3.14159;
    volume = (((4/3.0)* pi)*(pow(raio,3)));
    printf ("VOLUME = %.3lf\n",volume);
    return 0;
}
