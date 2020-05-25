#include "Elektroauto.h"
#include <iostream>
#include <string>

//Konstruktor
Elektroauto::Elektroauto(int leistung, float preisProPsTag, bool navi, float akku, float preisProKWH)
	: PKW(leistung, preisProPsTag, navi) {
	setAkku(akku);
	setPreisProKWH(preisProKWH);
}

//Funktionen
float Elektroauto::berechneJahresmiete(unsigned anzahlTageVermietet) {
	return PKW::berechneJahresmiete(anzahlTageVermietet) + anzahlTageVermietet * (getAkku() * getPreisProKWH());
}

void Elektroauto::printInfo() {
	PKW::printInfo();
	std::cout << "Akkukapazitaet       : " << getAkku() << std::endl;
	std::cout << "Preis pro KWH        : " << getPreisProKWH() << std::endl;
}