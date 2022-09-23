#include <stdio.h>
#include <stdlib.h>

int main(){
    int inicio_hr=0,fim_hr=0,tempo_hr=0;
    int inicio_min=0,fim_min=0,tempo_min=0;
    scanf("%i %i %i %i",&inicio_hr,&inicio_min,&fim_hr,&fim_min);


        if((inicio_hr > fim_hr)){
            tempo_hr = 24 - inicio_hr;
            tempo_hr += fim_hr;
        }else if(inicio_hr == fim_hr){
            tempo_hr = 24;
        }else
            tempo_hr = fim_hr - inicio_hr;
    

        if(inicio_min > fim_min ){
            tempo_min = 60 - inicio_min;
            tempo_min += fim_min;
            if(tempo_min == 60){
                tempo_min = 0;
                tempo_hr += 1;
            }
              
        }else if(inicio_min == fim_min){
            tempo_min = 0;
        }else
            tempo_min = fim_min - inicio_min;

    printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n",tempo_hr,tempo_min);
    
    return 0;
}