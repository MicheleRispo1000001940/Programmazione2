#include "OOP8Veicoli_Moto.h"
#include "OOP8Veicoli_Automobile.h"
#include "OOP8Veicoli_Camion.h"
#include "OOP8Veicoli_Speciali.h"
#include "OOP8_gara.h"

int main() {
	// Moto(2,velocitaMassima,prezzo,marca,carburante,motorizzazione)
	Moto m(380, 10, "Ducati", "1000cc");
	// automobile(4,velocitaMassima,prezzo,marca,carburante,motorizzazione)
	Auto a(160, 8000, "Fiat Punto", "diesel ", "1.300 MTJ");
	Auto g(120, 8000, "Fiat Punto", "diesel ", "1.300 MTJ");
	Auto f(230, 8000, "Fiat Punto", "diesel ", "1.300 MTJ");
	// camion(numeroRuote,velocita_max,prezzo,marca,carburante,motorizzazione)
	Camion c(60,180,4500,"daf","diesel","2000cc");
	// speciali(numeroRuote,velocita_max,prezzo,marca,carburante,motorizzazione)
	Speciali s(90,120, 10000, "xiaomi","elettrica", "1200cc");
	Speciali t(190,120, 10000, "samsung","elettrica", "1200cc");
	Speciali v(110,120, 10000, "solarCar","elettrica", "1200cc");

	cout << m << endl;
	cout << a << endl;
	cout << c <<endl;
	cout << s <<endl;
	
	Gara gara(10,10);
	gara.aggiungiPartecipante(m);
	gara.aggiungiPartecipante(a);
	gara.aggiungiPartecipante(c);
	gara.aggiungiPartecipante(s);
	gara.aggiungiPartecipante(t);
	gara.aggiungiPartecipante(v);
	gara.aggiungiPartecipante(g);
	gara.aggiungiPartecipante(f);
	gara.partenza();
	
	
}