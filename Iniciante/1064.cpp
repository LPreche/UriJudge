#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;

int main(){

    int cont=0,i=0;
    float soma=0,media=0;
    vector<float> valores;
    valores.resize(6);

    for(i=0;i<6;i++){
       cin >> valores[i];
    }

    for(float V : valores){
        if(V >= 0){
            cont++;
            soma += V;
        }
    }
    cout << fixed << setprecision(1);
    media = soma / cont;
    cout << cont << " valores positivos" << endl;
    cout << media << endl;
    return 0;
}