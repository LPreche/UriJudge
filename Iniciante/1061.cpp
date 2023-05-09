#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(){

    string Di,Df;
    string horaI,horaF;
    string segmento,palavra;
    int dI,dF,hI,hF,mI,mF,sI,sF;

    getline(cin,Di);   
    stringstream convertDiaI(Di);
    convertDiaI >> palavra;
    convertDiaI >> dI;

    getline(cin,horaI);
    stringstream convertHoraI(horaI);
    getline(convertHoraI,segmento,':');
    hI = stoi(segmento);
    getline(convertHoraI,segmento,':');
    mI = stoi(segmento);
    getline(convertHoraI,segmento,':');
    sI = stoi(segmento);
    

    getline(cin,Df);
    stringstream convertDiaF(Df);
    convertDiaF >> palavra;
    convertDiaF >> dF;

    getline(cin,horaF);
    stringstream convertHoraF(horaF);
    getline(convertHoraF,segmento,':');
    hF = stoi(segmento);
    getline(convertHoraF,segmento,':');
    mF = stoi(segmento);
    getline(convertHoraF,segmento,':');
    sF = stoi(segmento);
    /*
    cout << Di << " " << Df << endl;
    cout << hI << " " << mI << " " << sI << endl;
    cout << hF << " " << mF << " " << sF << endl;
    */

    int tempo_inicio,tempo_fim,duracaoTotal;
    tempo_inicio = (hI * 60) + mI;
    tempo_fim = (hF * 60) + mF;

    if(tempo_inicio > tempo_fim)
        duracaoTotal = (24*60) - (tempo_inicio - tempo_fim);
    else if(tempo_inicio == tempo_fim)
        duracaoTotal = 24*60;
    else
        duracaoTotal = tempo_fim - tempo_inicio;

    int Ddia=0;
    if(dF == dI)
        Ddia = 0;
    else if(dF-1 != dI)
        Ddia = (dF - dI) - 1;

    int Dhora = duracaoTotal / 60;
    if(Dhora == 24){
        Ddia++;
        Dhora = 0;
    }
    int Dmin = duracaoTotal % 60;
    int Dseg;
    if(sI > sF)
        Dseg = 60 - (sI - sF);
    else if( sI == sF)
        Dseg = 0; 
    else
        Dseg = sF - sI;
    
    cout << Ddia  << " dia(s)"     << endl;
    cout << Dhora << " hora(s)"    << endl;
    cout << Dmin  << " minuto(s)"  << endl;
    cout << Dseg  << " segundo(s)" << endl;

    return 0;
}