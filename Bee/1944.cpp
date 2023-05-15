#include<iostream>
#include<string>
#include<vector>
#include<list>

using namespace std;

int main(){

    int N,inverso=0,gBrindes=0;
    vector<string> painel;
    
    cin >> N;

    for(auto i = 0; i < N; i++){
        if(painel.empty()){
            i++;
            painel.push_back("FACE");
        }
        vector<char> F(4);
        string palavra, antInvertida;
        
        for(auto j = 0; j < 4; j++){
            cin >> F[j];
             palavra += toupper(F[j]);
        }

        painel.push_back(palavra);

        vector<char> C(painel[i-1].begin(), painel[i-1].end());

        for(auto k=3;k>=0;k--)
           antInvertida += C[k];
        
        if(antInvertida == painel[i]){
            gBrindes++;
            painel.pop_back();
            painel.pop_back();
        }    
        for(auto c : painel)
            cout << c << endl;
    }

    
    cout << "Ganhadores: " << gBrindes << endl;
        
    return 0;
}