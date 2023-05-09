#include<iostream>

using namespace std;

int main(){

    int N,numero,cIN=0,cOUT=0;
    
    cin >> N;

    for(int i=0;i<N;i++){
        cin >> numero;
        if(numero >=10 && numero<=20){
            cIN++;
        }else{
            cOUT++;
        }
    }

    cout << cIN << " in" << endl;
    cout << cOUT << " out" << endl;
    return 0;
}