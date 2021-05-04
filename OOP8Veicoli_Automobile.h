#include "OOP8Veicoli.h"
#include <iostream>
#include <sstream>

class Auto:public Veicolo{

    public:
         Auto(int velocitaMassima,double prezzo, string marca,string carburante,string motorizzazione):Veicolo(4,velocitaMassima,prezzo,marca,carburante,motorizzazione){}
        string toString() const{
            stringstream stream;
            stream<<"sono un auto di marca"<<marca<<", "<<motorizzazione<<" , "<<carburante<<" con velocita di : "<<velocita<<"km/h"<<endl;
            return stream.str();
        }
};