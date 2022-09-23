#include<stdio.h>
#include<stdlib.h>


int main(){

    double valor=0;
    int cont=0;
    scanf("%lf",&valor);
    printf("NOTAS:\n");
    while(valor >= 100){
        cont++;
        valor-=100.00;
    }
    printf("%i nota(s) de R$ 100.00\n",cont);
    cont=0;

    while(valor>=50 && valor < 100){
        cont++;
        valor-=50.00;
    }
    printf("%i nota(s) de R$ 50.00\n",cont);
    cont=0;

    while(valor>=20 && valor < 50){
        cont++;
        valor-=20.00;
    }
    printf("%i nota(s) de R$ 20.00\n",cont);
    cont=0;

    while(valor>=10 && valor < 20){
        cont++;
        valor-=10.00;
    }
    printf("%i nota(s) de R$ 10.00\n",cont);
    cont=0;

    while(valor>=5 && valor < 10){
        cont++;
        valor-=5.00;
    }
    printf("%i nota(s) de R$ 5.00\n",cont);
    cont=0;

    while(valor>=2 && valor < 5){
        cont++;
        valor-=2.00;
    }
    printf("%i nota(s) de R$ 2.00\n",cont);
    cont=0;

    printf("MOEDAS:\n");

    while(valor >= 1.00){
        cont++;
        valor-=1.00;
    }
    printf("%i moeda(s) de R$ 1.00\n",cont);
    cont=0;

    while(valor>=0.50 && valor < 1.00){
        cont++;
        valor-=0.50;
    }
    printf("%i moeda(s) de R$ 0.50\n",cont);
    cont=0;

    while(valor>=0.25 && valor < 0.50){
        cont++;
        valor-=0.25;
    }
    printf("%i moeda(s) de R$ 0.25\n",cont);
    cont=0;

    while(valor>=0.10 && valor < 0.25){
        cont++;
        valor-=0.10;
    }
    printf("%i moeda(s) de R$ 0.10\n",cont);
    cont=0;

    while(valor>=0.05 && valor < 0.10){
        cont++;
        valor-=0.05;
    }
    printf("%i moeda(s) de R$ 0.05\n",cont);
    cont=0;

    while(valor>=0.01 && valor < 0.05){
        cont++;
        valor-=0.01;
    }
    printf("%i moeda(s) de R$ 0.01\n",cont);
    cont=0;
    return 0;

}