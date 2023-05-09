#include<iostream>

using namespace std;

int main(){

    int X,Y,soma=0;;
    cin >> X >> Y;

    if(Y > X){
        for(int i=X-1;i<Y;i++){
            if((i%2)!= 0){
                soma += i;
            }
        }        
    }else if(X > Y){
        for(int i=Y+1;i<X;i++){
            if((i%2)!= 0){
                soma += i;
            }
        }       
    }else{
        soma = 0;
    }
    cout << soma << endl;
        
}