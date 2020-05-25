#include "AutovermietungsGesellschaft.h"
#include <iostream>
#include <string>

//Konstruktor
AutovermietungsGesellschaft::AutovermietungsGesellschaft() {}

//Funktionen
void AutovermietungsGesellschaft::addAuto(Auto* AutoPtr) {
	autos[anzahlAutos] = AutoPtr;
	anzahlAutos++;
}

float AutovermietungsGesellschaft::berechneGesamtJahresmiete(int tage) {
	float summe = 0;

	for (int i = 0; i < anzahlAutos; i++) {
		summe += autos[i]->berechneJahresmiete(tage);
	}
	return summe;
}

void AutovermietungsGesellschaft::printListe() {
	std::cout << "==========================================" << std::endl;
	std::cout << "AUTOLISTE" << std::endl << std::endl;

	for (int i = 0; i < anzahlAutos; i++) {
		std::cout << "Fahrzeug NR." << i + 1 << std::endl;
		autos[i]->printInfo();
		std::cout << std::endl;
	}

	std::cout << "==========================================" << std::endl << std::endl;
}