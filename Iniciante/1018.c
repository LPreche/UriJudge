#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,n2, cont100, cont50, cont20, cont10, cont5,cont2,cont1;
    scanf ("%d",&n);
    n2 = n;
    cont100 = 0;
    cont50 = 0;
    cont20 = 0;
    cont10 = 0;
    cont5 = 0;
    cont2 = 0;
    cont1 = 0;

    if ((n>0)&&(n<1000000)){

        while (n>=100){
            cont100 = cont100 + 1;
            n = n - 100;
        }
        while ((n >=50)&&(n<100)){
            cont50 = cont50 + 1;
            n = n - 50;
        }
        while ((n>=20)&&(n<50)){
            cont20 = cont20 + 1;
            n = n - 20;
        }
        while ((n>=10)&&(n<20)){
            cont10 = cont10 + 1;
            n = n - 10;
        }
        while ((n>=5)&&(n<10)){
            cont5 = cont5 + 1;
            n = n - 5;
        }
        while ((n>=2)&&(n<5)){
            cont2 = cont2 + 1;
            n = n - 2;
        }
        while ((n>=1)&&(n<2)){
            cont1 = cont1 + 1;
            n = n - 1;
        }
    }
    printf ("%d\n",n2);
    printf ("%d nota(s) de R$ 100,00\n",cont100);
    printf ("%d nota(s) de R$ 50,00\n",cont50);
    printf ("%d nota(s) de R$ 20,00\n",cont20);
    printf ("%d nota(s) de R$ 10,00\n",cont10);
    printf ("%d nota(s) de R$ 5,00\n",cont5);
    printf ("%d nota(s) de R$ 2,00\n",cont2);
    printf ("%d nota(s) de R$ 1,00\n",cont1);
}
