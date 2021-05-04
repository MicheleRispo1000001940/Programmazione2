#include<iostream>
#include <sstream>
#include "OOP8Veicoli.h"
class Moto:public Veicolo
{
    
    public:
    Moto(int velocitaMassima,double prezzo, string marca,string motorizzazione):Veicolo(2,velocitaMassima,prezzo,marca,"benzina",motorizzazione){
    }
    string toString() const{
        stringstream stream;
        stream<<"sono una moto di marca"<<marca<<","<<motorizzazione<<" "<<carburante<<" "<<"la mia velocita' e' di: "<<velocita<<" km/h"<< endl;
        return stream.str();
    }
    
    
}; 