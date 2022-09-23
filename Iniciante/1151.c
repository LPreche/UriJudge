#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i=0;
    scanf("%d",&n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    fib[2]=1;

    if(n>3)
        for(i=3;i<n;i++)
            fib[i]=fib[i-2]+fib[i-1];


    for(i=0;i<n;i++){
        printf("%d",fib[i]);
        if(i!=n-1)
            printf(" ");
    }
    printf("\n");



    return 0;
}