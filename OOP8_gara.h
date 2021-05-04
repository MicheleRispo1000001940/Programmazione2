#ifndef GARA_H
#define GARA_H
#include "OOP8Veicoli.h"
#include <cstdlib>
#include <time.h>
#include <sstream>

//simulare 10 giri
class Gara{
    int durata;
    int numeroPartecipanti;
    int numeroIscritti;
    void controlla(int t);
    Veicolo** veicoli;

    public:
    Gara(int durata,int numeropartecipanti):durata(durata),numeroPartecipanti(numeropartecipanti){

        veicoli=new Veicolo*[numeroPartecipanti];
        numeroIscritti=0;
    }
    ~Gara(){
        delete [] veicoli;
    }
    void partenza(); //dichiarazione di un metodo, tipo di ritorno+ firma.
    void Ordina();
    void stampaclassifica();
    //defineremo i metodi separatamente dopo averli dichiarati.
    void aggiungiPartecipante( Veicolo&v);
};
#endif

void Gara::aggiungiPartecipante( Veicolo&v){
    //mi serve sapere il numero di partecipanti iscritti finora
    //A.aggiungo un parametro a questo metodo. 
    //B.utilizzo una costante;
    //C.aggiungo un attributo alla classe
    //D.Vado al mare.

  veicoli[numeroIscritti++]=&v; //prendiamo l'elementi in pos num iscritti dell'array veicoli, questo elem punta ad un veicolo, prendiamo quel veicolo è assegnamolo ad un veicolo che già esiste.
  //è un operazione su un tipo di dato definito da noi , possiamo ridefinire l'operatore uguale.
}
//possiamo prendere la definizione dei metodi e metterli in file a parte.
void Gara::controlla(int t){

        int massimo_temporaneo=veicoli[0]->getVelocita();
        int indice_massimo=0;
    
    for(int i=1;i<numeroIscritti;i++){
        //estrarre la veloctià di ogni veicolo e verificare chi è in testa
        //RICERCA ALGORITMO.solo per trovare il massimo, ordinamento se vogliamo la classifica completa.  
        //int massimo_temporaneo=-1;
        if(veicoli[i]->getVelocita()>massimo_temporaneo)
        {
            massimo_temporaneo=veicoli[i]->getVelocita();
            indice_massimo=i;
        }
    }    
    cout<<"il veicolo piu' veloce e'"<<*veicoli[indice_massimo]<<"e ha velocita' di "<<massimo_temporaneo<<endl;
}
void Gara::partenza(){
    srand(time(NULL));
    for(int i=0;i<durata;i++){

        for(int j=0;j<numeroIscritti;j++){
            int scelta=rand()%2;
            if(scelta==1){
                veicoli[j]->accelera();
            }
            else {
                veicoli[j]->decelera();}
        }
        this->controlla(i);
    }
    this->stampaclassifica();
}
void Gara::Ordina(){
    int j;
    Veicolo* scambio;
    //insertion sort 
    for(int i=0;i<numeroIscritti;i++)
    {
        for(int j=i+1;j<numeroIscritti;j++)
        {
           if(veicoli[i]->getVelocita()<veicoli[j]->getVelocita())
            {
                scambio=veicoli[j];
                veicoli[j]=veicoli[i];
                veicoli[i]=scambio;
            }
        }
    }
}
void Gara::stampaclassifica(){
    this->Ordina();
    for(int i=0;i<numeroIscritti;i++)
    {     
        cout<<"posizione: "<<i+1<<" "<<*veicoli[i]<<endl;
    }
}
