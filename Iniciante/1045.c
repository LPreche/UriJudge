#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int i=0;
double a,b,c,aux=0;
scanf("%lf %lf %lf",&a,&b,&c);
for(i=0;i<3;i++){
    if(a>b & a>c){
      if(c>b){
        aux=b;
        b=c;
        c=aux;
      }
    }else if(a<b & a>c){
      aux=a;
      a=b;
      b=aux;
    }else if(a>b & a<=c){
      aux=a;
      a=c;
      c=aux;
      if(c>b){
        aux=b;
        b=c;
        c=aux;
      }
    }else if(a<b & a<c){
      if(b>c){
        aux=a;
        a=b;
        b=aux;
      }
      if(c>b){
        aux=a;
        a=c;
        c=aux;
      }
    }else if(a==c & a<b){
      if(a<b){
        aux=a;
        a=b;
        b=aux;
      }
    }else if(a==b & a<c){
        if(a<c){
          aux=a;
          a=c;
          c=aux;
        }
      }
      
}

if(a>=(b+c)){
  printf("NAO FORMA TRIANGULO\n");
}else if((pow(a,2))==((pow(b,2))+(pow(c,2)))){
  printf("TRIANGULO RETANGULO\n");
}else if((pow(a,2))>((pow(b,2))+(pow(c,2)))){
  printf("TRIANGULO OBTUSANGULO\n"); 
}else if((pow(a,2))<((pow(b,2))+(pow(c,2)))){
  printf("TRIANGULO ACUTANGULO\n");
}

if(a==b & a==c & b==c)
  printf("TRIANGULO EQUILATERO\n");
else if((a==b & a!=c)||(a==c & a!=b)||(b==c & b!=a))
  printf("TRIANGULO ISOSCELES\n");  

return 0;

}