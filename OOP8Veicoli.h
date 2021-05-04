/*si implementi un programma che rappresenti una gerarchia di veicoli.
ogni veicolo ha un numero di ruote, un tipo di carburante, una motorizzazione
una velocità massima, una marca ed un prezzo.
tra i veicoli distinguiamo, motocicli, automobili, camion,mezzi speciali.
*/
//si simuli una gara tra 10 veicoloi di tipo diverso, riportando posizioni iniziali, sorpassi e classifica finale.

#ifndef VEICOLO_H//VERIFICHIAMO CHE L'HEADER DICHIARATO NON SIA DEFINITO
#define VEICOLO_H//LO DEFINIAMO

#include<iostream>
#include<stdlib.h>
using namespace std;
class Veicolo{
    
    protected:
    int numeroRuote;
    int velocitaMassima;
    int velocita;
    double  prezzo;
    string marca;
    string carburante;
    string motorizzazione;   
    
    public:
     		Veicolo(int numeroRuote, int velocitaMassima, double prezzo, std::string marca, std::string carburante, std::string motorizzazione) : numeroRuote(numeroRuote), velocitaMassima(velocitaMassima), velocita(0), prezzo(prezzo), marca(marca), carburante(carburante), motorizzazione(motorizzazione) {}

        int getNumeroRuote(){
            return numeroRuote;
        }
        int getVelocitaMassima(){
            return velocitaMassima;
        }
        int getVelocita(){
            return velocita;
        }
        double getPrezzo(){
            return prezzo;
        }
        string getMarca(){
            return marca;
        }
        string getCarburante(){
            return carburante;
        }
        string getMotorizzazione()
        {
            return motorizzazione;
        }

        void setNumeroRuote(int n){
            numeroRuote=n;
        }
        void setVelocitaMassima(int n){
             velocitaMassima=n;
        }
        void setVelocita(int n){
            velocita=n;
        }
        void setPrezzo(double d){
            prezzo=d;
        }
        void setMarca(string s){
            marca=s;
        }
        void setCarburante(string s)
        {
            carburante=s;
        }
        void setMotorizzazione(string s)
        {
            motorizzazione=s;
        }

        void accelera(){
            if(velocita<velocitaMassima)
            {
                velocita++;
            }
        }
        void decelera(){
            if(velocita>0)
            {
                velocita--;
            }
        }
        virtual string toString()const =0;//dipende dall'implementazione della classe.
        //impedisce di instanziare direttamente la classe veicolo
        friend ostream&operator<<(ostream&out,const Veicolo& v)
        {
            out<<v.toString();
            return out;
        }
        void operator=(const Veicolo&v ){
            this->numeroRuote=v.numeroRuote;
            this->velocitaMassima=v.velocitaMassima;
            this->motorizzazione=v.motorizzazione;
            this->carburante=v.carburante;
            this->marca=v.marca;
            this->velocita=v.velocita;
            this->prezzo=v.prezzo;
        }
        bool operator>(const Veicolo&v){

            if(this->velocita>v.velocita)
            {
                return v.velocita;
            }
            else return false;
        }
        bool operator<(const Veicolo&v){

            if(this->velocita<v.velocita)
            {
                return true;
            }
            else return false;
        }
        
};
#endif