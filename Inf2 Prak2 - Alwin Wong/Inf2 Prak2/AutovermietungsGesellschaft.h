#pragma once
#include "Auto.h"

#define MAX_AUTOS 10

class AutovermietungsGesellschaft {
public:
	//Konstruktor
	AutovermietungsGesellschaft();

	void addAuto(Auto* AutoPtr);
	void printListe();
	float berechneGesamtJahresmiete(int tage);

private:
	Auto* autos[MAX_AUTOS];
	int anzahlAutos = 0;
};