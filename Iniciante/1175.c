#include<stdio.h>
#include<stdlib.h>


int main(){

    int n[20];
    int i=0,f=19,aux;

    for(i=0;i<20;i++)
        scanf("%d",&n[i]);
    for(i=0;i<10;i++){
        aux=n[i];
        n[i]=n[f];
        n[f]=aux;
        f--;
    }
    for(i=0;i<20;i++)
        printf("N[%d] = %d\n",i,n[i]);

    return 0;
}
