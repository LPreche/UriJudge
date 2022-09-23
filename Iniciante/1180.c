#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i=0,menor=999999999,pos;
    scanf("%d",&n);
    int x[n];

    for(i=0;i<n;i++)
        scanf("%d",&x[i]);


    for(i=0;i<n;i++)
        if(x[i]<menor){
            menor=x[i];
            pos=i;
        }
    printf("Menor valor: %d\n",menor);
    printf("Posicao: %d\n",pos);
    return 0;
}
