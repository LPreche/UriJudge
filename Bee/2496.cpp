#include<iostream>
#include<string>
#include<vector>
#include<list>

using namespace std;

bool eh_ordenado(vector<char> A,vector<char> S,int tamanho){
    for(auto i=0;i<tamanho;i++){
        if(S[i] != A[i]){
             return false;
        }else{
            return true;
        }    
    }        
};

int main(){

    int N,M;
    
    vector<char> alfabeto = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    cin >> N;
    cin >> M;
    cin >> ws;
    string entrada;
    getline(cin,entrada);
    entrada.resize(M);
    vector<char> sequencia(entrada.begin(),entrada.end());
    if(eh_ordenado(alfabeto,sequencia,M)){
        cout << "There are the chance." << endl;
    }else{
        for(auto i=0;i<M;i++){
            bool temChance = false;
            for(auto j=0;j<M;j++){
                char aux = sequencia[i];
                sequencia[i]=sequencia[j];
                sequencia[j]=aux;
                if(eh_ordenado(alfabeto,sequencia,M)){
                    cout << "There are the chance." << endl;
                    temChance = true;
                    break;
                }else{
                    char aux = sequencia[i];
                    sequencia[i]=sequencia[j];
                    sequencia[j]=aux;
                } 
                if(temChance)
                    break;  
            }
            if(!temChance)
                cout << "There aren't the chance." << endl;
        }
    }
    return 0;
}