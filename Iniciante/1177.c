#include<stdio.h>
#include<stdlib.h>


int main(){
    int n[1000];
    int t,i=0,f=0;
    scanf("%d",&t);
    for(i=0;i<1000;i++){
        if(f!=t)
            n[i]=f;
        else{
            f=0;
            n[i]=f;
        }
        f++;
    }

    for(i=0;i<1000;i++)
        printf("N[%d] = %d\n",i,n[i]);
    return 0;
}