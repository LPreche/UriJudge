#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, contano, contmes, contdias;
    contano = 0;
    contmes = 0;
    contdias = 0;
    scanf ("%d",&n);
    while (n >= 365){
        contano = contano + 1;
        n = n - 365;
    }
    while ((n>=30)&&(n<365)){
        contmes = contmes+ 1;
        n = n - 30;
    }
    contdias = n;
    printf("%d ano(s)\n",contano);
    printf("%d mes(es)\n",contmes);
    printf("%d dia(s)\n",contdias);
    return 0;
}