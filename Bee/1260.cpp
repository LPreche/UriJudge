#include<iostream>
#include<string>
#include<vector>
#include<list>

using namespace std;

struct Especie{
    string nome;
    int qtd;
    double porcentagem;
};

int main(){
    
    int N;
    string nomeEsp;
    list<Especie> especies;
    cin >> N;
    cin >> ws;
    //getline(cin,nomeEsp);
    for(auto i=0;i<N;i++){

            int qtdEsp=0;
            while(getline(cin,nomeEsp)){
                if(nomeEsp.empty())
                    break;

                for(Especie E : especies){
                    if(E.nome == nomeEsp){
                        E.qtd++;
                    }else{
                        Especie esp;
                        esp.nome = nomeEsp;
                        esp.qtd=1;
                        esp.porcentagem=0.0;
                        especies.push_back(esp);
                    }
                }
                qtdEsp++;    
                cin.ignore();
            }

            for(Especie E : especies)
                E.porcentagem = (E.qtd * 100) / qtdEsp;
            
        
    }
    cout << "teste!" << endl;
    if(especies.empty())
        cout << "teste! vazio" << endl;
    for(Especie E : especies)
        cout << E.nome << " " << E.porcentagem << endl;
    return 0;
}