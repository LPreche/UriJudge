#include<stdio.h>
#include<stdlib.h>

int main(){
    int n=1,p=0;
    while((n>=1) && (n<=100)){
        p=n%2;
        if(p==0)
            printf("%d\n",n);
        n++;
    }

}