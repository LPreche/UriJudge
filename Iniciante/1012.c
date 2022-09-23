#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   double pi, A, B, C,triangulo, circulo, trapezio, quadrado, retangulo;
   scanf ("%lf" "%lf" "%lf",&A, &B,&C);
   pi =3.14159;
   triangulo = ((A * C)/2);
   circulo = ((pow(C,2))*pi);
   trapezio = (((A + B)*C)/2);
   quadrado = (B * B);
   retangulo = (A * B);

    printf ("TRIANGULO: %.3lf\n",triangulo);
    printf ("CIRCULO: %.3lf\n",circulo);
    printf ("TRAPEZIO: %.3lf\n",trapezio);
    printf ("QUADRADO: %.3lf\n",quadrado);
    printf ("RETANGULO: %.3lf\n",retangulo);


    return 0;
}
