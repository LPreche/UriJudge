#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, conthr, contmin, contseg;
    conthr = 0;
    contmin = 0;
    contseg = 0;
    scanf ("%d",&n);
    while (n >= 3600){
        conthr = conthr + 1;
        n = n - 3600;
    }
    while ((n>=60)&&(n<3600)){
        contmin = contmin + 1;
        n = n - 60;
    }
    contseg = n;
    printf ("%d:%d:%d\n",conthr,contmin, contseg);
    return 0;
}