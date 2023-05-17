#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Alunos {
    string nome;
    char tamanho;
    string cor;
};

int main() {
    int N;

    do {
        cin >> N;
        if (N != 0) {
            vector<Alunos> alunos;
            cin.ignore(); // Descarta o caractere de nova linha após a leitura de N
            for (auto i = 0; i < N; i++) {
                Alunos aluno;

                cin.ignore(); // Descarta o caractere de nova linha antes de ler o nome
                getline(cin, aluno.nome);

                cin >> aluno.tamanho;
                cin.ignore(); // Descarta o caractere de nova linha após a leitura do tamanho
                cin >> aluno.cor;

                cin.ignore(); // Descarta o caractere de nova linha após a leitura da cor

                alunos.push_back(aluno);
            }

            for (const Alunos& aluno : alunos)
                cout << aluno.cor << " " << aluno.tamanho << " " << aluno.nome << endl;

            cout << endl;
        }

    } while (N != 0);

    return 0;
}
