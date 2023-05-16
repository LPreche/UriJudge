#include<iostream>
#include<string>
#include<vector>
#include<list>

using namespace std;

int main(string){
    string assassino, morto;
    vector<string> assassinos, mortos;
    while(cin >> assassino >> morto ){
        assassinos.push_back(assassino);
        mortos.push_back(morto);
    }
    
    for(auto i=0; i<assassinos.size();i++)
        cout << assassinos[i] << " matou " << mortos[i] << endl;
    
    return 0;
}