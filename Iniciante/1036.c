#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double A=0,B=0,C=0,R1=0,R2=0,delta=0,X=0;

    scanf("%lf %lf %lf",&A,&B,&C);

    delta = (pow(B,2))- (4*A*C);
    X = 2 * A;
    if((delta >= 0)&&(X != 0)){
        R1 = (-B + (sqrt(delta)))/ X;
        R2 = (-B - (sqrt(delta)))/ X;
        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);
    }else
        printf("Impossivel calcular\n");
    return 0;
}