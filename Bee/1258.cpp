#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

struct Alunos {
    string nome;
    char tamanho;
    string cor;
};

int main() {
    int N;

    while (cin >> N && N != 0) {
        vector<Alunos> alunos;
        cin.ignore();

        for (int i = 0; i < N; i++) {
            Alunos aluno;
            getline(cin, aluno.nome);
            cin >> aluno.cor >> aluno.tamanho;
            cin.ignore(); // Descartar o caractere de nova linha após a leitura do tamanho
            alunos.push_back(aluno);   
        }
        list<string> informacoes;
        for (Alunos aluno : alunos){
            string temp = aluno.cor + " " + aluno.tamanho + " " + aluno.nome;
            informacoes.push_back(temp);
        }
        
        informacoes.sort();

        for(string I : informacoes)
            cout << I << endl;

        cout << endl;
    }

    return 0;
}
