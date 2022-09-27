#include <stdio.h>
#include <stdlib.h>

int main(){
    double valor=0,calc_valor=0,imposto=0;
    scanf("%lf",&valor);

    if(valor > 2000.00){
        if(valor > 4500.00){
        calc_valor = valor - 4500.00;
        imposto += calc_valor * 0.28;
        valor = 4500.00;
        }

        if(valor > 3000.00 && valor <= 4500.00){
        calc_valor = valor - 3000;
        imposto += calc_valor * 0.18;
        valor = 3000.00;
        }

        if(valor > 2000.00 && valor <= 3000.00){
        calc_valor = valor - 2000.00;
        imposto += calc_valor * 0.08;
        }
        printf("R$ %.2f\n",imposto);
    }else
        printf("Isento\n");

    return 0;
}