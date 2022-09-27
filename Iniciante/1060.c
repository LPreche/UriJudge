#include <stdio.h>
#include <stdlib.h>

int main(){

    int cont=0,i=0;
    float valores[6];
    for(i=0;i<6;i++){
        scanf("%f",&valores[i]);
    }

    for(i=0;i<6;i++){
        if(valores[i] >= 0 )
            cont++;
    }
    printf("%i valores positivos\n",cont);
    return 0;
}