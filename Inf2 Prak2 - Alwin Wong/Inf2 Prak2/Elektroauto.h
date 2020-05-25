#pragma once
#include "PKW.h"

class Elektroauto : public PKW {
public:
	//Konstruktor
	Elektroauto(int leistung, float preisProPsTag, bool navi, float akku, float preisProKWH);

	//Setter/Getter
	void setAkku(float akku) {
		this->akku = akku;
	}
	int getAkku() {
		return akku;
	}
	void setPreisProKWH(float preisProKWH) {
		this->preisProKWH = preisProKWH;
	}
	float getPreisProKWH() {
		return preisProKWH;
	}

	//Virtuelle Funktion zur Mietberechnung
	virtual float berechneJahresmiete(unsigned anzahlTageVermietet);
	//Virtuelle Funktion zur Bildschirmausgabe
	virtual void printInfo();

private:
	int akku;
	float preisProKWH;
};

