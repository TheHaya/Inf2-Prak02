#pragma once
#include "Auto.h"

class PKW : public Auto {
public:
	//Konstruktor
	PKW(int leistung, float preisProPsTag, bool navi);

	//Setter/Getter
	void setNavi(bool navi) {
		this->navi = navi;
	}
	bool getNavi() {
		return navi;
	}

	//Virtuelle Funktion zur Mietberechnung
	virtual float berechneJahresmiete(unsigned anzahlTageVermietet);
	//Virtuelle Funktion zur Bildschirmausgabe
	virtual void printInfo();
private:
	bool navi;
	static const int naviAufpreis;
};
