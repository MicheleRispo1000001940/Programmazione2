#include<iostream>
#include "OOP8Veicoli.h"
#include <sstream>

class Camion:public Veicolo{

    public:
    Camion(int numeroRuote,int velocita_max,double prezzo, string marca,string carburante,string motorizzazione):Veicolo(numeroRuote,velocita_max,prezzo,marca,carburante,motorizzazione){}
    string toString()const {

        stringstream stream;
        stream<<"Sono un Camion di marca:"<<marca<<" "<<motorizzazione<<" "<<carburante<<" con velocita' :"<<velocita<<"km/h"<<endl;
        return stream.str();
    }
};