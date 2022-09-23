#include <stdio.h>
#include <stdlib.h>

int main(){
    int inicio=0,fim=0,tempo=0;
    scanf("%i %i",&inicio,&fim);
    if(inicio<=24 && fim <=24){
        if(inicio > fim ){
            tempo = 24 - inicio;
            tempo += fim;
        }else if(inicio == fim){
            tempo = 24;
        }else
            tempo = fim - inicio;

        printf("O JOGO DUROU %i HORA(S)\n",tempo);
    }
    return 0;
}