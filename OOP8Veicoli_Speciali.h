#include<iostream>
#include<sstream>
#include "OOP8Veicoli.h"
using namespace std;

class Speciali:public Veicolo
{
    string nome="auto ";
    public:
    Speciali(int numeroRuote,int velocita_max,double prezzo, string marca,string carburante,string motorizzazione):Veicolo(numeroRuote,velocita_max,prezzo,marca,carburante,motorizzazione){}
    string toString()const{
        stringstream stream;
        stream<<"sono un "<<nome<<"di marca "<<marca<<","<<motorizzazione<<" "<<carburante<<" "<<"la mia velocita' e' di: "<<velocita<<" km/h"<< endl;
        return stream.str();
    }
    string setNomeSpeciale(string n)
    {
        nome=n;
        return nome;
    }
    
    
};