#include<stdio.h>
#include<stdlib.h>

int main(){

    int n[3];
    int ord[3];
    int i=0,f=0,aux;

    for(i=0;i<3;i++){
        scanf("%d",&n[i]);
        ord[i]=n[i];
    }

    for(i=0;i<3;i++){
        for(f=0;f<3;f++){
            if(ord[f]>ord[i]){
                aux=ord[f];
                ord[f]=ord[i];
                ord[i]=aux;
            }
        }
    }

    for(i=0;i<3;i++)
        printf("%d\n",ord[i]);

    printf("\n");

    for(i=0;i<3;i++)
        printf("%d\n",n[i]);


    return 0;

}
