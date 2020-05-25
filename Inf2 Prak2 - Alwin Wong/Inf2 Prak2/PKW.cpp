#include "PKW.h"
#include <iostream>
#include <string>

const int PKW::naviAufpreis = 100;


//Konstruktor
PKW::PKW(int leistung, float preisProPsTag, bool navi) : Auto(leistung, preisProPsTag) {
	setNavi(navi);
}

float PKW::berechneJahresmiete(unsigned anzahlTageVermietet) {
	if (getNavi() == true) {
		return anzahlTageVermietet * (getPreisProPsTag() * getLeistung() + naviAufpreis);
	}
	else {
		return anzahlTageVermietet * (getPreisProPsTag() * getLeistung());
	}
}

void PKW::printInfo() {
	std::cout << "Jahresmaximalmiete   : " << berechneJahresmiete(365) << std::endl;
	std::cout << "Leistung             : " << getLeistung() << std::endl;
	std::cout << "Preis pro PS         : " << getPreisProPsTag() << std::endl;

	if (getNavi() == true) {
		std::cout << "Navigationssystem    : " << "Ja" << std::endl;
	}
	else {
		std::cout << "Navigationssystem    : " << "Nein" << std::endl;
	}
}